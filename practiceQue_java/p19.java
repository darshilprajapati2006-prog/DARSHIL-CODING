class Circle {
    double radius;

    double circumference() {
        return 2 * 3.14159 * radius;
    }
}

public class p19 {
    public static void main(String[] args) {
        Circle c1 = new Circle();
        c1.radius = 7;

        System.out.println("Radius: " + c1.radius);
        System.out.println("Circumference: " + c1.circumference());
    }
}
