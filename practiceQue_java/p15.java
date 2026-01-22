class Person {
    String name;
    int age;
}

public class p15 {
    public static void main(String[] args) {
        Person p1 = new Person();
        p1.name = "Father";
        p1.age = 45;

        Person p2 = new Person();
        p2.name = "Mother";
        p2.age = 40;

        Person p3 = new Person();
        p3.name = "Brother";
        p3.age = 18;

        System.out.println("Family Members:");
        System.out.println(p1.name + " - Age: " + p1.age);
        System.out.println(p2.name + " - Age: " + p2.age);
        System.out.println(p3.name + " - Age: " + p3.age);
    }
}
