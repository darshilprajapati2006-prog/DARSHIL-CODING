public class p90 {

    // Recursive method to calculate power (x^n)
    public static int power(int x, int n) {
        if (n == 0) {
            return 1;
        }
        return x * power(x, n - 1);
    }

    public static void main(String[] args) {
        int x = 2;
        int n = 5;

        int result = power(x, n);

        System.out.println("Base (x): " + x);
        System.out.println("Exponent (n): " + n);
        System.out.println("Result (x^n): " + result);
    }
}
