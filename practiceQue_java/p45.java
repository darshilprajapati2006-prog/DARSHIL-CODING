public class p45 {
    public static void main(String[] args) {
        float radiusFloat = 7.5f;
        double radiusDouble = 7.5;

        float areaFloat = (float) (Math.PI * radiusFloat * radiusFloat);
        double areaDouble = Math.PI * radiusDouble * radiusDouble;

        System.out.println("Using float data type:");
        System.out.println("Radius: " + radiusFloat);
        System.out.println("Area of circle: " + areaFloat);

        System.out.println("----------------------");

        System.out.println("Using double data type:");
        System.out.println("Radius: " + radiusDouble);
        System.out.println("Area of circle: " + areaDouble);
    }
}
