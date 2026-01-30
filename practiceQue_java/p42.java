public class p42 {
    public static void main(String[] args) {
        // Implicit Type Casting (Widening)
        int intValue = 100;
        double doubleValue = intValue;   // int to double

        // Explicit Type Casting (Narrowing)
        double price = 99.99;
        int priceInt = (int) price;      // double to int

        System.out.println("Implicit Type Casting:");
        System.out.println("Int value: " + intValue);
        System.out.println("Double value (from int): " + doubleValue);

        System.out.println("----------------------");

        System.out.println("Explicit Type Casting:");
        System.out.println("Double value: " + price);
        System.out.println("Int value (from double): " + priceInt);
    }
 }
