import java.util.Scanner;

interface Operations {
    void calculate(int a, int b, int c);
}

abstract class Result {
    abstract public void display(int sum, double avg, int product, int largest, int smallest);
}

class Calculator extends Result implements Operations {

    @Override
    public void calculate(int a, int b, int c) {
        int sum = a + b + c;
        double avg = sum / 3.0;
        int product = a * b * c;

        int largest = a;
        if (b > largest) largest = b;
        if (c > largest) largest = c;

        int smallest = a;
        if (b < smallest) smallest = b;
        if (c < smallest) smallest = c;

        display(sum, avg, product, largest, smallest);
    }

    @Override
    public void display(int sum, double avg, int product, int largest, int smallest) {
        System.out.println("Sum = " + sum);
        System.out.println("Average = " + avg);
        System.out.println("Product = " + product);
        System.out.println("Largest = " + largest);
        System.out.println("Smallest = " + smallest);
    }
}

public class p3 {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter first integer: ");
            int a = sc.nextInt();

            System.out.print("Enter second integer: ");
            int b = sc.nextInt();

            System.out.print("Enter third integer: ");
            int c = sc.nextInt();

            Calculator obj = new Calculator();
            obj.calculate(a, b, c);
        }
    }
}
