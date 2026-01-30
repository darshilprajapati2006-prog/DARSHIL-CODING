public class p69 {
    public static void main(String[] args) {
        int number = 12345;
        int reverse = 0;

        for (; number != 0; number = number / 10) {
            int digit = number % 10;
            reverse = reverse * 10 + digit;
        }

        System.out.println("Reversed number: " + reverse);
    }
}
