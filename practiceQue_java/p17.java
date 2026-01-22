class Car {
    String color;
    String model;
    int year;

    void displayInfo() {
        System.out.println("Model: " + model);
        System.out.println("Color: " + color);
        System.out.println("Year: " + year);
    }
}

public class p17 {
    public static void main(String[] args) {
        Car c1 = new Car();
        c1.model = "Swift";
        c1.color = "White";
        c1.year = 2022;

        c1.displayInfo();
    }
}
