public class p60 {
    public static void main(String[] args) {
        int age = 25;

        System.out.println("Age: " + age);

        if (age < 13) {
            System.out.println("Category: Child");
        } else if (age >= 13 && age <= 19) {
            System.out.println("Category: Teenager");
        } else if (age >= 20 && age <= 59) {
            System.out.println("Category: Adult");
        } else {
            System.out.println("Category: Senior");
        }
    }
}
