public class p88 {

    // Method to reverse a String and return it
    public static String reverseString(String text) {
        String reversed = "";

        for (int i = text.length() - 1; i >= 0; i--) {
            reversed = reversed + text.charAt(i);
        }
        return reversed;
    }

    public static void main(String[] args) {
        String input = "JavaProgramming";

        String result = reverseString(input);

        System.out.println("Original String: " + input);
        System.out.println("Reversed String: " + result);
    }
}
