import java.util.Scanner;

public class p5 {
    public static void main(String[] args) {

        try (Scanner sc = new Scanner(System.in)) {

            double totalMiles = 0.0;
            double totalGallons = 0.0;

            System.out.print("Enter miles driven (-1 to quit): ");
            int miles = sc.nextInt();

            while (miles != -1) {
                System.out.print("Enter gallons used: ");
                int gallons = sc.nextInt();

                double mpg = (double) miles / gallons;
                System.out.println("Miles per gallon for this trip: " + mpg);

                totalMiles += miles;
                totalGallons += gallons;

                double combinedMPG = totalMiles / totalGallons;
                System.out.println("Combined miles per gallon so far: " + combinedMPG);
                System.out.println();

                System.out.print("Enter miles driven (-1 to quit): ");
                miles = sc.nextInt();
            }
        }
    }
}
