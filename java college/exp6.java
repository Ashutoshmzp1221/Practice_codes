import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

class Student implements Serializable {
    private static final long serialVersionUID = 1L;
    private String name;
    private int id;
    private String course;
    private double section;

    public Student(String name, int id, String course, double section) {
        this.name = name;
        this.id = id;
        this.course = course;
        this.section = section;
    }

    @Override
    public String toString() {
        return "Name: " + name + ", ID: " + id + ", Designation: " + course + ", Salary: " + section;
    }
}

public class exp6 {
    private static final String FILENAME = "Studentdata.txt";

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("File is created! \nSelect and option from menu to enter the data of an student:");
        ArrayList<Student> students = new ArrayList<>();
        int choice;
        do {
            System.out.println("\nMenu:");
            System.out.println("1. Add an Employee");
            System.out.println("2. Display All Employees");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();
            switch (choice) {
                case 1:
                    Student(scanner, students);
                    break;
                case 2:
                    showStudent(students);
                    break;

                case 3:
                    storeStudent(students);
                    System.out.println("Data Saved! Exiting the program!");
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        } while (choice != 3);
        scanner.close();
    }

    private static void Student(Scanner scanner, ArrayList<Student> students) {
        System.out.print("Enter student name: ");
        String name = scanner.next();
        System.out.print("Enter student ID: ");
        int id = scanner.nextInt();
        System.out.print("Enter student course: ");
        String course = scanner.next();
        System.out.print("Enter student section: ");
        double section = scanner.nextDouble();

        Student student = new Student(name, id, course, section);
        students.add(student);
    }

    private static void showStudent(ArrayList<Student> students) {
        System.out.println("\nAll Students:");
        for (Student student : students) {
            System.out.println(student);
        }
    }

    private static void storeStudent(ArrayList<Student> students) {
        try (PrintWriter writer = new PrintWriter(new FileWriter(FILENAME))) {
            for (Student student : students) {
                writer.println(student);
            }
        } catch (IOException e) {
            System.out.println("Error saving student to file: " + e.getMessage());
        }
    }
}
