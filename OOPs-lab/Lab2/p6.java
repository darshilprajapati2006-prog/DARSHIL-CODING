import java.util.Scanner;

public class p6 {
    public static void main(String[] args) {

        try (Scanner sc = new Scanner(System.in)) {

            System.out.print("Enter account number (-1 to quit): ");
            int accountNumber = sc.nextInt();

            while (accountNumber != -1) {

                System.out.print("Enter beginning balance: ");
                double beginningBalance = sc.nextDouble();

                System.out.print("Enter total charges this month: ");
                double totalCharges = sc.nextDouble();

                System.out.print("Enter total credits this month: ");
                double totalCredits = sc.nextDouble();

                System.out.print("Enter credit limit: ");
                double creditLimit = sc.nextDouble();

                double newBalance = beginningBalance + totalCharges - totalCredits;

                System.out.println("New balance is: " + newBalance);

                if (newBalance > creditLimit) {
                    System.out.println("Credit limit exceeded");
                }

                System.out.println();
                System.out.print("Enter account number (-1 to quit): ");
                accountNumber = sc.nextInt();
            }
        }
    }
}
