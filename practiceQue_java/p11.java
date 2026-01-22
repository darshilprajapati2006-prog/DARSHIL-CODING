class Student {
    String name;
    int rollNumber;
}

public class p11 {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.name = "Darshil";
        s1.rollNumber = 101;

        System.out.println("Name: " + s1.name);
        System.out.println("Roll Number: " + s1.rollNumber);
    }
}
