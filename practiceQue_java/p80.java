import java.util.Scanner;

public class p80 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String correctPassword = "java123";
        String enteredPassword;
        int attempts = 0;

        do {
            System.out.print("Enter password: ");
            enteredPassword = sc.nextLine();
            attempts++;

            if (enteredPassword.equals(correctPassword)) {
                System.out.println("Access Granted");
                return;
            } else {
                System.out.println("Wrong password. Attempts left: " + (3 - attempts));
            }

        } while (attempts < 3);

        System.out.println("Access Denied. Too many wrong attempts.");
    }
}
