class Employee {
    int empId;
    String name;
    double salary;
}

public class p18 {
    public static void main(String[] args) {
        Employee e1 = new Employee();
        e1.empId = 101;
        e1.name = "Rahul";
        e1.salary = 45000.50;

        System.out.println("Employee Details:");
        System.out.println("ID: " + e1.empId);
        System.out.println("Name: " + e1.name);
        System.out.println("Salary: " + e1.salary);
    }
}
