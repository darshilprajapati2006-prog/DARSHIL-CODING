public class p39 {
    public static void main(String[] args) {
        int a = 25;
        int b = 40;
        int c = 30;

        int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

        System.out.println("Number 1: " + a);
        System.out.println("Number 2: " + b);
        System.out.println("Number 3: " + c);
        System.out.println("----------------------");
        System.out.println("Maximum number is: " + max);
    }
}
