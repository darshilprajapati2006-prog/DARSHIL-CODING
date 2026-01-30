public class p46 {
    public static void main(String[] args) {
        char ch = 'A';

        if (ch >= 'A' && ch <= 'Z') {
            System.out.println(ch + " is an Uppercase letter");
        } else if (ch >= 'a' && ch <= 'z') {
            System.out.println(ch + " is a Lowercase letter");
        } else if (ch >= '0' && ch <= '9') {
            System.out.println(ch + " is a Digit");
        } else {
            System.out.println(ch + " is a Special Character");
        }
    }
}
