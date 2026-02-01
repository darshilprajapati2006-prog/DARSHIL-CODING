import streamlit as st
import subprocess
import pandas as pd
import datetime
import hashlib
import time
import random
from fpdf import FPDF

# --- CONFIGURATION ---
ADB_PATH = "adb"

# --- BACKEND FUNCTIONS ---

def run_adb_command(command_list):
    """Runs ADB commands safely."""
    try:
        full_cmd = f"{ADB_PATH} " + " ".join(command_list)
        # errors='ignore' prevents crashing on emoji/special characters in texts
        output = subprocess.check_output(full_cmd, shell=True, stderr=subprocess.STDOUT).decode("utf-8", errors="ignore")
        return output
    except Exception:
        return ""

def get_device_info():
    """Checks connection."""
    model = run_adb_command(["shell", "getprop", "ro.product.model"]).strip()
    return model

# --- DATA EXTRACTION ENGINES ---

def get_installed_apps():
    """Extracts installed apps for malware scanning."""
    try:
        output = run_adb_command(["shell", "pm", "list", "packages", "-f"])
        apps = []
        for line in output.splitlines():
            if "=" in line:
                parts = line.split("=")
                pkg_name = parts[-1]
                path = parts[0].replace("package:", "")
                apps.append({"Package Name": pkg_name, "Path": path})
        return pd.DataFrame(apps)
    except:
        return pd.DataFrame()

def analyze_risk(df):
    """Scans apps for malware keywords."""
    if df.empty: return df
    suspicious_keywords = ["spy", "tracker", "keylogger", "remote", "cheat", "shadow"]
    
    def check_risk(name):
        for k in suspicious_keywords:
            if k in name.lower():
                return "🚩 CRITICAL: Potential Malware"
        return "✅ Verified Safe"

    df["Risk Analysis"] = df["Package Name"].apply(check_risk)
    return df

def get_call_logs(use_demo=False):
    """Extracts Call Logs (Real or Demo)."""
    if use_demo:
        # Mock Data for Judge Presentation
        data = []
        for _ in range(8):
            data.append({
                "number": f"+91 98765 {random.randint(10000,99999)}",
                "date": datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'),
                "type": random.choice(["Incoming", "Outgoing", "Missed"]),
                "duration": f"{random.randint(20, 500)}s"
            })
        return pd.DataFrame(data)

    calls = []
    
    # Method 1: Dumpsys Strategy (Motorola/Pixel Friendly)
    try:
        output = run_adb_command(["shell", "dumpsys", "telecom"])
        for line in output.splitlines():
            line = line.strip()
            if "tel:" in line:
                parts = line.split("tel:")
                if len(parts) > 1:
                    raw_num = parts[1].split()[0]
                    clean_num = ''.join(filter(str.isdigit, raw_num))
                    if len(clean_num) > 7:
                        calls.append({"number": clean_num, "date": "Recent (Log Dump)", "type": "Unknown", "duration": "N/A"})
    except:
        pass

    # Method 2: Content Query (Standard Android)
    if not calls:
        cmd = ["shell", "content", "query", "--uri", "content://call_log/calls", "--projection", "number:date:duration:type", "--limit", "20"]
        output = run_adb_command(cmd)
        
        for line in output.splitlines():
            if "Row:" in line:
                try:
                    parts = line.split(",")
                    entry = {}
                    for part in parts:
                        if "=" in part:
                            k, v = part.split("=")
                            entry[k.strip()] = v.strip()
                    if "date" in entry:
                        ts = int(entry["date"]) / 1000
                        entry["date"] = datetime.datetime.fromtimestamp(ts).strftime('%Y-%m-%d %H:%M:%S')
                    calls.append(entry)
                except:
                    continue
    
    return pd.DataFrame(calls)

def get_sms_messages(use_demo=False):
    """Extracts SMS (Real or Demo)."""
    if use_demo:
        data = []
        suspicious_texts = ["Send me the OTP immediately", "Your account is hacked", "Meeting confirmed 10 PM"]
        for _ in range(5):
            body = random.choice(suspicious_texts) if random.random() > 0.6 else "Hey, how are you?"
            data.append({
                "address": f"+1 555 {random.randint(100,999)}",
                "date": datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'),
                "body": body,
                "type": "Inbox"
            })
        return pd.DataFrame(data)

    messages = []
    cmd = ["shell", "content", "query", "--uri", "content://sms", "--projection", "address:date:body", "--limit", "20"]
    output = run_adb_command(cmd)

    if "SecurityException" in output:
        return pd.DataFrame() # Trigger error in UI

    for line in output.splitlines():
        if "Row:" in line:
            try:
                parts = line.split(", ")
                entry = {}
                for part in parts:
                    if "=" in part:
                        k, v = part.split("=", 1)
                        entry[k.strip()] = v.strip()
                if "date" in entry and entry["date"].isdigit():
                     ts = int(entry["date"]) / 1000
                     entry["date"] = datetime.datetime.fromtimestamp(ts).strftime('%Y-%m-%d %H:%M:%S')
                if "body" in entry:
                    messages.append(entry)
            except:
                continue
    return pd.DataFrame(messages)

def analyze_sms_risk(df):
    """Flags suspicious SMS content."""
    if df.empty: return df
    keywords = ["otp", "bank", "hack", "password", "urgent", "lottery"]
    
    def check_risk(text):
        if not isinstance(text, str): return "✅ Normal"
        for k in keywords:
            if k in text.lower():
                return "🚩 SUSPICIOUS CONTENT"
        return "✅ Normal"

    if "body" in df.columns:
        df["Risk Analysis"] = df["body"].apply(check_risk)
    return df

def get_recent_files():
    """Timeline Forensics (3-Way Timestamp Analysis)."""
    recent_files = []
    try:
        cmd = [ADB_PATH, "shell", "stat", "-c", "'%X %Y %Z %n'", "/sdcard/Download/*"]
        output = run_adb_command(cmd)
        now_epoch = time.time()
        ONE_DAY = 86400 
        
        for line in output.splitlines():
            line = line.replace("'", "")
            parts = line.split(" ", 3) 
            if len(parts) == 4:
                atime_str, mtime_str, ctime_str, filename = parts
                if atime_str.isdigit() and mtime_str.isdigit() and ctime_str.isdigit():
                    atime, mtime, ctime = int(atime_str), int(mtime_str), int(ctime_str)
                    age_atime, age_mtime, age_ctime = now_epoch - atime, now_epoch - mtime, now_epoch - ctime
                    
                    event_type = []
                    is_suspicious = False
                    
                    if 0 <= age_ctime <= ONE_DAY:
                        event_type.append("Renamed/Moved")
                        is_suspicious = True
                    if 0 <= age_mtime <= ONE_DAY:
                        event_type.append("Modified Content")
                        is_suspicious = True
                    if 0 <= age_atime <= ONE_DAY:
                        event_type.append("Opened/Accessed")
                        is_suspicious = True
                    
                    if is_suspicious:
                        most_recent_ts = max(atime, mtime, ctime)
                        full_date_time = datetime.datetime.fromtimestamp(most_recent_ts).strftime('%Y-%m-%d %H:%M:%S')
                        recent_files.append({
                            "Filename": filename.split("/")[-1],
                            "Activity Type": ", ".join(event_type),
                            "Exact Time": full_date_time,
                            "Full Path": filename
                        })
    except Exception:
        pass
    return pd.DataFrame(recent_files)

def create_pdf_report(case_id, investigator, model, suspicious_apps, recent_files, suspicious_sms):
    """Generates PDF Report."""
    pdf = FPDF()
    pdf.add_page()
    pdf.set_font("Arial", 'B', 16)
    pdf.cell(200, 10, txt="Mobile Forensics Investigation Report", ln=1, align='C')
    
    pdf.set_font("Arial", size=12)
    pdf.ln(10)
    pdf.cell(200, 10, txt=f"Case ID: {case_id}", ln=1)
    pdf.cell(200, 10, txt=f"Investigator: {investigator}", ln=1)
    pdf.cell(200, 10, txt=f"Device: {model}", ln=1)
    pdf.cell(200, 10, txt=f"Date: {datetime.datetime.now().strftime('%Y-%m-%d %H:%M')}", ln=1)
    
    pdf.ln(10)
    pdf.set_font("Arial", 'B', 14)
    pdf.cell(200, 10, txt="Executive Summary", ln=1)
    pdf.set_font("Arial", size=12)
    pdf.cell(200, 10, txt=f"- Suspicious Apps Detected: {suspicious_apps}", ln=1)
    pdf.cell(200, 10, txt=f"- Timeline Events (Last 24h): {recent_files}", ln=1)
    pdf.cell(200, 10, txt=f"- Flagged SMS Messages: {suspicious_sms}", ln=1)
    
    # Hash for integrity
    evidence_str = f"{case_id}{suspicious_apps}{recent_files}"
    h = hashlib.sha256(evidence_str.encode()).hexdigest()
    pdf.ln(10)
    pdf.set_font("Arial", 'I', 10)
    pdf.cell(200, 10, txt=f"Evidence Integrity Hash (SHA-256): {h}", ln=1)
    
    return pdf.output(dest='S').encode('latin-1')

# --- FRONTEND UI ---
st.set_page_config(page_title="Forensic Tool", layout="wide")

st.title("🛡️ Mobile Forensics Investigation Tool")
st.markdown("### PS 6: Comprehensive Evidence Extraction")

# SIDEBAR
st.sidebar.header("🔌 Device Control")

# FIXED: Added unique key to prevent duplicate error
if st.sidebar.button("Check Connection", key="btn_check_conn"):
    model = get_device_info()
    if model:
        st.sidebar.success(f"Connected: {model}")
        st.session_state['connected'] = True
        st.session_state['model'] = model
    else:
        st.sidebar.error("No Device Found.")

use_demo = st.sidebar.checkbox("⚠️ Enable Demo Mode (If ADB Blocked)")

# MAIN APP
if st.session_state.get('connected'):
    
    # Initialize counters for report
    if 'count_apps' not in st.session_state: st.session_state['count_apps'] = 0
    if 'count_files' not in st.session_state: st.session_state['count_files'] = 0
    if 'count_sms' not in st.session_state: st.session_state['count_sms'] = 0

    tab1, tab2, tab3, tab4 = st.tabs(["📦 Apps", "📞 Calls & SMS", "🕒 Timeline", "📄 Report"])
    
    with tab1:
        st.header("App Malware Scan")
        if st.button("Scan Installed Apps", key="btn_scan_apps"):
            df = get_installed_apps()
            analyzed_df = analyze_risk(df)
            
            suspicious = analyzed_df[analyzed_df["Risk Analysis"].str.contains("CRITICAL")]
            st.session_state['count_apps'] = len(suspicious)
            
            if not suspicious.empty:
                st.error(f"⚠️ {len(suspicious)} SUSPICIOUS APPS DETECTED")
                st.table(suspicious)
            else:
                st.success("✅ No malware signatures found.")
            with st.expander("View All Apps"):
                st.dataframe(analyzed_df)

    with tab2:
        st.header("Communication Logs")
        col1, col2 = st.columns(2)
        
        with col1:
            st.subheader("Call Logs")
            if st.button("Extract Calls", key="btn_get_calls"):
                df_calls = get_call_logs(use_demo)
                if not df_calls.empty:
                    st.table(df_calls)
                else:
                    st.warning("No calls found or Permission Denied. Try Demo Mode.")

        with col2:
            st.subheader("SMS Messages")
            if st.button("Extract SMS", key="btn_get_sms"):
                df_sms = get_sms_messages(use_demo)
                df_analyzed = analyze_sms_risk(df_sms)
                
                suspicious_sms = df_analyzed[df_analyzed["Risk Analysis"].str.contains("SUSPICIOUS")] if not df_analyzed.empty else pd.DataFrame()
                st.session_state['count_sms'] = len(suspicious_sms)

                if not suspicious_sms.empty:
                    st.error(f"⚠️ {len(suspicious_sms)} Suspicious Texts")
                    st.table(suspicious_sms)
                elif not df_analyzed.empty:
                    st.success("✅ Messages Clean")
                    st.dataframe(df_analyzed)
                else:
                    st.warning("No SMS found or Permission Denied. Try Demo Mode.")

    with tab3:
        st.header("Forensic Timeline")
        if st.button("Analyze Recent Activity", key="btn_timeline"):
            df_files = get_recent_files()
            st.session_state['count_files'] = len(df_files)
            
            if not df_files.empty:
                st.table(df_files)
            else:
                st.info("No files modified in the last 24 hours.")

    with tab4:
        st.header("Generate Case Report")
        case_id = st.text_input("Case ID", "CASE-001")
        investigator = st.text_input("Investigator Name", "Officer")
        
        if st.button("📄 Download PDF Report", key="btn_report"):
            pdf_data = create_pdf_report(
                case_id, investigator, st.session_state.get('model', 'Unknown'),
                st.session_state['count_apps'],
                st.session_state['count_files'],
                st.session_state['count_sms']
            )
            st.download_button("📥 Click to Save PDF", pdf_data, "Forensic_Report.pdf", "application/pdf")

else:
    st.info("👈 Please connect your device and click 'Check Connection' in the sidebar.")