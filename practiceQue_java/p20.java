class Product {
    int productId;
    String name;
    double price;

    // Constructor
    Product(int productId, String name, double price) {
        this.productId = productId;
        this.name = name;
        this.price = price;
    }

    // Method to display product details
    void display() {
        System.out.println("Product ID: " + productId);
        System.out.println("Name: " + name);
        System.out.println("Price: ₹" + price);
        System.out.println("---------------------");
    }
}

public class p20 {
    public static void main(String[] args) {
        // Creating multiple product objects
        Product p1 = new Product(101, "Laptop", 55000);
        Product p2 = new Product(102, "Mobile", 25000);
        Product p3 = new Product(103, "Headphones", 2000);

        // Displaying product details
        p1.display();
        p2.display();
        p3.display();
    }
}
