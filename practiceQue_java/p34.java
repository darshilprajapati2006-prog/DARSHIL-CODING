public class p34 {
    public static void main(String[] args) {
        int num1 = 45;
        int num2 = 30;

        System.out.println("Number 1: " + num1);
        System.out.println("Number 2: " + num2);
        System.out.println("----------------------");

        if (num1 > num2) {
            System.out.println(num1 + " is larger than " + num2);
        } else if (num2 > num1) {
            System.out.println(num2 + " is larger than " + num1);
        } else {
            System.out.println("Both numbers are equal");
        }
    }
}
