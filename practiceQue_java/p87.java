public class p87 {

    // Method to calculate factorial and return result
    public static int factorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }

    public static void main(String[] args) {
        int number = 5;

        int result = factorial(number);

        System.out.println("Number: " + number);
        System.out.println("Factorial: " + result);
    }
}
