public class p50 {
    public static void main(String[] args) {
        String numberStr = "25";

        // Converting String to Integer
        int number = Integer.parseInt(numberStr);

        System.out.println("String value: " + numberStr);
        System.out.println("Converted Integer value: " + number);

        System.out.println("----------------------");

        // Arithmetic operations
        System.out.println("Addition (+10): " + (number + 10));
        System.out.println("Subtraction (-5): " + (number - 5));
        System.out.println("Multiplication (*2): " + (number * 2));
        System.out.println("Division (/5): " + (number / 5));
    }
}
