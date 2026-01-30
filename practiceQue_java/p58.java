public class p58 {
    public static void main(String[] args) {
        int a = 3;
        int b = 4;
        int c = 5;

        System.out.println("Side a: " + a);
        System.out.println("Side b: " + b);
        System.out.println("Side c: " + c);

        // Triangle validity condition
        if (a + b > c && a + c > b && b + c > a) {
            System.out.println("The triangle is valid");
        } else {
            System.out.println("The triangle is NOT valid");
        }
    }
}
