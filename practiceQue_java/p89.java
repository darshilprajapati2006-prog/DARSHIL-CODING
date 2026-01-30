public class p89 {

    // Method to calculate area of a circle
    public static double area(double radius) {
        return Math.PI * radius * radius;
    }

    // Method to calculate area of a rectangle (method overloading)
    public static double area(double length, double width) {
        return length * width;
    }

    public static void main(String[] args) {
        double radius = 7.0;
        double length = 10.0;
        double width = 5.0;

        double circleArea = area(radius);
        double rectangleArea = area(length, width);

        System.out.println("Radius of Circle: " + radius);
        System.out.println("Area of Circle: " + circleArea);

        System.out.println("----------------------");

        System.out.println("Length of Rectangle: " + length);
        System.out.println("Width of Rectangle: " + width);
        System.out.println("Area of Rectangle: " + rectangleArea);
    }
}
