class Mobile {
    String brand;
    String model;
    double price;
}

public class p16 {
    public static void main(String[] args) {
        Mobile m1 = new Mobile();
        m1.brand = "Samsung";
        m1.model = "Galaxy A14";
        m1.price = 13999;

        Mobile m2 = new Mobile();
        m2.brand = "Redmi";
        m2.model = "Note 12";
        m2.price = 11999;

        System.out.println("Mobile 1 Details:");
        System.out.println("Brand: " + m1.brand);
        System.out.println("Model: " + m1.model);
        System.out.println("Price: " + m1.price);

        System.out.println();

        System.out.println("Mobile 2 Details:");
        System.out.println("Brand: " + m2.brand);
        System.out.println("Model: " + m2.model);
        System.out.println("Price: " + m2.price);
    }
}
