import java.util.Scanner;

public class p95 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = new int[5];
        int search;
        boolean found = false;

        System.out.println("Enter 5 integers:");

        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter element to search: ");
        search = sc.nextInt();

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == search) {
                System.out.println("Element found at index: " + i);
                found = true;
                break;
            }
        }

        if (!found) {
            System.out.println("Element not found in the array");
        }
    }
}
