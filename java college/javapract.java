// package src;

import java.util.Scanner;
import java.util.HashMap;

class Employee {
    String id, name, dateOfJoining;
    char desigCode;
    int basic, hra, it;

    public Employee(String id, String name, String dateOfJoining, char desigCode, int basic, int hra, int it) {
        this.id = id;
        this.name = name;
        this.dateOfJoining = dateOfJoining;
        this.desigCode = desigCode;
        this.basic = basic;
        this.hra = hra;
        this.it = it;
    }

    public int getDA() {
        switch (desigCode) {
            case 'e': return 20000;
            case 'c': return 32000;
            case 'k': return 12000;
            case 'r': return 15000;
            case 'm': return 40000;
            default: return 0;
        }
    }

    public String getDesignation() {
        switch (desigCode) {
            case 'e': return "Engineer";
            case 'c': return "Consultant";
            case 'k': return "Clerk";
            case 'r': return "Receptionist";
            case 'm': return "Manager";
            default: return "Unknown";
        }
    }
    
    public String getDept() {
        switch (desigCode) {
            case 'e': return "Front Desk";
            case 'c': return "PM";
            case 'k': return "Acct";
            case 'r': return "R&D";
            case 'm': return "Engg";
            default: return "Unknown";
        }
    }

    public int calculateSalary() {
        return basic + hra + getDA() - it;
    }
}

public class javapract {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashMap<String, Employee> mpp = new HashMap<>();
        int choice;

        do {
            System.out.println("\nAshutosh Dwivedi ------ 21BCS2617");
            System.out.println("Menu: ");
            System.out.println("1. Add an employee");
            System.out.println("2. Display employee info");
            System.out.println("3. Exit");
            System.out.println("Enter your choice: ");

            choice = sc.nextInt();

            switch (choice) {
                case 1 -> addEmployee(mpp, sc);
                case 2 -> displayInfo(mpp, sc);
                case 3 -> System.out.println("Exiting the program. Bye!!");
                default -> System.out.println("Invalid Input..");
            }
        } while (choice != 3);

        sc.close();
    }

    static void addEmployee(HashMap<String, Employee> mpp, Scanner sc) {
        String id, name, dateOfJoining;
        char desigCode;
        int basic, hra, it;

        System.out.println("Enter employee id: ");
        id = sc.next();
        sc.nextLine(); 
        System.out.println("Enter employee's name: ");
        name = sc.nextLine();
        System.out.println("Enter Date of joining: ");
        dateOfJoining = sc.next();
        System.out.println("Enter designation code: ");
        desigCode = sc.next().charAt(0);
        System.out.println("Enter basic salary: ");
        basic = sc.nextInt();
        System.out.println("Enter hra: ");
        hra = sc.nextInt();
        System.out.println("Enter IT: ");
        it = sc.nextInt();

        mpp.put(id, new Employee(id, name, dateOfJoining, desigCode, basic, hra, it));
    }

    static void displayInfo(HashMap<String, Employee> mpp, Scanner sc) {
        System.out.println("Enter employee id: ");
        String key = sc.next();
        if (mpp.containsKey(key)) {
            Employee emp = mpp.get(key);
            System.out.println("---------*****---------The required data is printed below---------*****----------");
            System.out.println("---------------------------------------------------------------------------------");
			// System.out.println("| Emp ID | " + "| Emp name | " +"| Department | " + "|     DOJ    | " + "| EMP Degn | " +
            //                    "| Emp Salary |" );
			System.out.println("|  "+ emp.id + "  | " + "| " + emp.name +" | " + "| "+ emp.getDept()+" | " + 
                               "| "+emp.dateOfJoining + " | "+"| " + emp.getDesignation()+ " | "+"|   "+emp.calculateSalary()+"   |");
            System.out.println("---------------------------------------------------------------------------------");
            
        } else {
            System.out.println("Employee not found");
        }
    }
}