public class p52 {
    public static void main(String[] args) {
        int a = 45;
        int b = 78;
        int c = 32;

        System.out.println("Number 1: " + a);
        System.out.println("Number 2: " + b);
        System.out.println("Number 3: " + c);
        System.out.println("----------------------");

        if (a >= b && a >= c) {
            System.out.println("Largest number is: " + a);
        } else if (b >= a && b >= c) {
            System.out.println("Largest number is: " + b);
        } else {
            System.out.println("Largest number is: " + c);
        }
    }
}
