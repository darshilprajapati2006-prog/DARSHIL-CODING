public class p47 {
    public static void main(String[] args) {
        int marks = 55;

        boolean passed = marks > 40;

        System.out.println("Marks: " + marks);
        System.out.println("Passed: " + passed);

        if (passed) {
            System.out.println("Student has passed the exam");
        } else {
            System.out.println("Student has failed the exam");
        }
    }
}
