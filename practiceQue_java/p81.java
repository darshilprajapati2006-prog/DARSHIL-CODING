public class p81 {

    // Method that takes two integers and returns their sum
    public static int add(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 20;

        int result = add(num1, num2);

        System.out.println("Number 1: " + num1);
        System.out.println("Number 2: " + num2);
        System.out.println("Sum: " + result);
    }
}
