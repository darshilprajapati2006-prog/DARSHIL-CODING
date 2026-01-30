import java.util.Scanner;

public class p99 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] source = new int[5];
        int[] destination = new int[5];

        System.out.println("Enter 5 integers for source array:");

        for (int i = 0; i < source.length; i++) {
            source[i] = sc.nextInt();
        }

        // Copy elements from source to destination
        for (int i = 0; i < source.length; i++) {
            destination[i] = source[i];
        }

        System.out.println("Elements of destination array:");
        for (int i = 0; i < destination.length; i++) {
            System.out.println(destination[i]);
        }
    }
}
