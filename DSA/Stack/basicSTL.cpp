#include<iostream>
#include<stack>
using namespace std;

void display_M1(stack<int> st){
    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
}
void display_M2(stack<int> st, stack<int> &temp){
    //with use of extra temp stack
    while(st.size()>0){
        // cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    //putting elements back from temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl<<endl;
    display_M1(st);
    display_M2(st,temp);
    // cout<<temp.top();
}
