public class p84 {

    // Method to find maximum of three numbers
    public static int findMax(int a, int b, int c) {
        if (a >= b && a >= c) {
            return a;
        } else if (b >= a && b >= c) {
            return b;
        } else {
            return c;
        }
    }

    public static void main(String[] args) {
        int x = 25;
        int y = 40;
        int z = 30;

        int max = findMax(x, y, z);

        System.out.println("Number 1: " + x);
        System.out.println("Number 2: " + y);
        System.out.println("Number 3: " + z);
        System.out.println("Maximum number: " + max);
    }
}
