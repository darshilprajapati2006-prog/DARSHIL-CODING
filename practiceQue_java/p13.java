class Rectangle {
    double length;
    double width;

    double area() {
        return length * width;
    }
}

public class p13 {
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle();
        r1.length = 10;
        r1.width = 5;

        System.out.println("Length: " + r1.length);
        System.out.println("Width: " + r1.width);
        System.out.println("Area: " + r1.area());
    }
}
