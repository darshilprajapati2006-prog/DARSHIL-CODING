public class p77 {
    public static void main(String[] args) {
        int num1 = 48;
        int num2 = 18;

        int a = num1;
        int b = num2;

        // Using Euclidean algorithm with while loop
        while (b != 0) {
            int remainder = a % b;
            a = b;
            b = remainder;
        }

        System.out.println("Number 1: " + num1);
        System.out.println("Number 2: " + num2);
        System.out.println("GCD: " + a);
    }
}
