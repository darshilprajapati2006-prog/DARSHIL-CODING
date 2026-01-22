import java.util.Scanner;

public class p7 {

    public static double calculateCharges(double hours) {
        double charge = 2.0;

        if (hours > 3) {
            charge = 2.0 + Math.ceil(hours - 3) * 0.5;
        }

        if (charge > 10.0) {
            charge = 10.0;
        }

        return charge;
    }

    public static void main(String[] args) {

        try (Scanner sc = new Scanner(System.in)) {

            double totalReceipts = 0.0;

            System.out.print("Enter hours parked for customer (-1 to quit): ");
            double hours = sc.nextDouble();

            int customer = 1;

            while (hours != -1) {
                double charge = calculateCharges(hours);
                System.out.println("Customer " + customer + " charge: $" + charge);

                totalReceipts += charge;
                System.out.println("Running total: $" + totalReceipts);
                System.out.println();

                customer++;
                System.out.print("Enter hours parked for customer (-1 to quit): ");
                hours = sc.nextDouble();
            }

            System.out.println("Total receipts for yesterday: $" + totalReceipts);
        }
    }
}
