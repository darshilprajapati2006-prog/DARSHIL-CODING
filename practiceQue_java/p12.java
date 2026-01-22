class Book {
    String title;
    String author;
    double price;
}

public class p12 {
    public static void main(String[] args) {
        Book b1 = new Book();
        b1.title = "Java Basics";
        b1.author = "James";
        b1.price = 299.50;

        Book b2 = new Book();
        b2.title = "OOP with Java";
        b2.author = "Robert";
        b2.price = 399.00;

        System.out.println("Book 1 Details:");
        System.out.println("Title: " + b1.title);
        System.out.println("Author: " + b1.author);
        System.out.println("Price: " + b1.price);

        System.out.println();

        System.out.println("Book 2 Details:");
        System.out.println("Title: " + b2.title);
        System.out.println("Author: " + b2.author);
        System.out.println("Price: " + b2.price);
    }
}
