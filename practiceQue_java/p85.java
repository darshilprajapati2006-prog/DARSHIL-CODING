public class p85 {

    // Method to check if a number is prime
    public static boolean isPrime(int number) {
        if (number <= 1) {
            return false;
        }

        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int num = 29;

        boolean result = isPrime(num);

        System.out.println("Number: " + num);
        if (result) {
            System.out.println("The number is Prime");
        } else {
            System.out.println("The number is NOT Prime");
        }
    }
}
