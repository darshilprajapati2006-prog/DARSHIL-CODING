public class p82 {

    // Method to check if a number is even
    public static boolean isEven(int number) {
        return number % 2 == 0;
    }

    public static void main(String[] args) {
        int num = 15;

        boolean result = isEven(num);

        System.out.println("Number: " + num);

        if (result) {
            System.out.println("The number is Even");
        } else {
            System.out.println("The number is Odd");
        }
    }
}
