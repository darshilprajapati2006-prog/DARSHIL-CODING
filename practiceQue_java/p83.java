public class p83 {

    // Method to calculate area of a rectangle
    public static double calculateArea(double length, double width) {
        return length * width;
    }

    public static void main(String[] args) {
        double length = 10.5;
        double width = 4.0;

        double area = calculateArea(length, width);

        System.out.println("Length: " + length);
        System.out.println("Width: " + width);
        System.out.println("Area of Rectangle: " + area);
    }
}
