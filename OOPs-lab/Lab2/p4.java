class Date {
    private int month;
    private int day;
    private int year;

    public Date(int month, int day, int year) {
        this.month = month;
        this.day = day;
        this.year = year;
    }

    public void setMonth(int month) {
        this.month = month;
    }

    public int getMonth() {
        return month;
    }

    public void setDay(int day) {
        this.day = day;
    }

    public int getDay() {
        return day;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public int getYear() {
        return year;
    }

    public void displayDate() {
        System.out.println(month + "/" + day + "/" + year);
    }
}

public class p4 {   // DateTest
    public static void main(String[] args) {

        Date d1 = new Date(1, 22, 2026);

        System.out.print("Date: ");
        d1.displayDate();

        d1.setMonth(12);
        d1.setDay(31);
        d1.setYear(2025);

        System.out.print("Updated Date: ");
        d1.displayDate();
    }
}
