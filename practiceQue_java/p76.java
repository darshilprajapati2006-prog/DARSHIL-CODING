import java.util.Scanner;

public class p76 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char choice;

        do {
            System.out.println("Program is running...");
            System.out.print("Do you want to continue? (Y/N): ");
            choice = sc.next().charAt(0);
        } while (choice != 'N' && choice != 'n');

        System.out.println("Program stopped.");
    }
}
