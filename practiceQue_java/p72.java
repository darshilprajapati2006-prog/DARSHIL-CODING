import java.util.Scanner;

public class p72 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number;
        int sum = 0;

        System.out.println("Enter numbers (enter 0 to stop):");

        while (true) {
            number = sc.nextInt();
            if (number == 0) {
                break;
            }
            sum = sum + number;
        }

        System.out.println("Sum of entered numbers: " + sum);
    }
}
