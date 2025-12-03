import java.util.ArrayList;
import java.util.List;

class Employee {
    private String name;
    private int age;

    // Default constructor
    public Employee() {}

    // Parameterized constructor
    public Employee(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Getter for name
    public String getName() {
        return name;
    }

    // Setter for name
    public void setName(String name) {
        this.name = name;
    }

    // Getter for age
    public int getAge() {
        return age;
    }

    // Setter for age
    public void setAge(int age) {
        this.age = age;
    }

    // toString method to print object details
    @Override
    public String toString() {
        return "Employee{name='" + name + "', age=" + age + "}";
    }
}

public class Vipul {
    public static void main(String[] args) {
        List<Employee> employees = new ArrayList<>();
        employees.add(new Employee("Vipul Sharma", 25));
        employees.add(new Employee("Rahul Verma", 30));
        employees.add(new Employee("Priya Singh", 28));

        for (Employee emp : employees) {
            System.out.println(emp); 
        }
    }
}
