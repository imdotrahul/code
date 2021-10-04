class Member {
    private String name;
    private int age;
    private String phNumber;
    private String address;
    private double salary;

    public Member(String name, int age, String phNumber, String address, double salary) {
        this.name = name;
        this.age = age;
        this.phNumber = phNumber;
        this.address = address;
        this.salary = salary;
    }

    public void printSalary() {
        System.out.println("Salary " + salary);
    }

    static class Employee extends Member {
        private String specialization;

        public Employee(String name, int age, String phNumber,
                        String address, double salary, String specialization) {
            super(name, age, phNumber, address, salary);
            this.specialization = specialization;
        }
    }

    static class Manager extends Member {
        private String department;

        public Manager(String name, int age, String phNumber,
                       String address, double salary, String department) {
            super(name, age, phNumber, address, salary);
            this.department = department;
        }
    }
}

    public class Main {


        public static void main(String[] args) {

            Member.Employee employee = new Member.Employee("Rahul", 25, "555-555-55", "Home", 100000, "IT");
            Member.Manager manager = new Member.Manager("Jatin", 30, "555-617-55", "Earth", 50000, "IT");
            employee.printSalary();
            manager.printSalary();


        }
    }