public class p37 {
    public static void main(String[] args) {
        double principal = 10000;   // Principal amount
        double rate = 5;            // Annual interest rate (%)
        int time = 2;               // Time in years

        double amount = principal * Math.pow((1 + rate / 100), time);
        double compoundInterest = amount - principal;

        System.out.println("Principal: ₹" + principal);
        System.out.println("Rate of Interest: " + rate + "%");
        System.out.println("Time: " + time + " years");
        System.out.println("----------------------");
        System.out.println("Compound Interest: ₹" + compoundInterest);
        System.out.println("Total Amount: ₹" + amount);
    }
}
