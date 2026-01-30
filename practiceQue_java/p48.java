

public class p48 {
    public static void main(String[] args) {
        byte b = 127;   // maximum value of byte

        System.out.println("Before overflow (byte): " + b);
        b++; // overflow happens here
        System.out.println("After overflow (byte): " + b);

        System.out.println("----------------------");

        int i = Integer.MAX_VALUE; // maximum value of int
        System.out.println("Before overflow (int): " + i);
        i++; // overflow happens here
        System.out.println("After overflow (int): " + i);
    }
}