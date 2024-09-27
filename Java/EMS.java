import java.util.Scanner;
import java.util.HashMap;

class Employee{
	String id, name, dateOfJoining,dept;
	// char dept;
	int basic, hra, da;
	
	public Employee(String id, String name, String dateOfJoining, String dept, int basic, int hra, int da) {
		this.id = id;
		this.name = name;
		this.dateOfJoining = dateOfJoining;
		this.dept = dept;
		this.basic = basic;
		this.hra = hra;
		this.da = da;
	}
}

public class EMS {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		HashMap<String, Employee> mpp = new HashMap<>();
		int choice = 0;
		
		do {
			System.out.println("Menu: ");
			System.out.println("1. Add an employee");
			System.out.println("2. Display employee info");
			System.out.println("3. Exit");
			System.out.println("Enter your choice: ");
			
			choice = sc.nextInt();
			
			switch(choice) {
			
			case 1 -> addEmployee(mpp, sc);
			case 2 -> displayInfo(mpp, sc);
			case 3 -> System.out.println("Exiting the program. Bye Bye");
			default -> System.out.println("Invalid Input better luck try next time");
			}
		} while(choice != 3);
		
		
		sc.close();
	}
	
	static void addEmployee(HashMap<String, Employee> mpp, Scanner sc) {
		String id, name, dateOfJoining;
		String dept;
		int basic, hra, da;
		System.out.println("Enter employee id: ");
		id = sc.next();
		System.out.println("Enter employee's name: ");
		name = sc.next();
		System.out.println("Enter Date of joining: ");
		dateOfJoining = sc.next();
		System.out.println("Enter dept: ");
		dept = sc.next();
		System.out.println("Enter basic salary: ");
		basic = sc.nextInt();
		System.out.println("Enter hra: ");
		hra = sc.nextInt();
		System.out.println("Enter da: ");
		da = sc.nextInt();
		
		mpp.put(id, new Employee(id, name, dateOfJoining, dept, basic, hra, da));
	}
	
	static void displayInfo(HashMap<String, Employee> mpp, Scanner sc) {
		System.out.println("Enter employee id: ");
		String key = sc.next();
		if (mpp.containsKey(key)) {
			Employee temp = mpp.get(key);
			System.out.println("------------------------------------------------------------------");
			System.out.println("| Emp ID | " + "| Emp name | " + "|     DOJ    | " + "| EMP Dept | " +"| Emp Salary |" );
			System.out.println("|  "+ temp.id + "  | " + "| " + temp.name +" | " + "| "+temp.dateOfJoining + " | "+"| " + temp.dept+ " | "+"|   "+(temp.basic+temp.hra+temp.da)+"   |");
			// System.out.println("Employee date of joining: " + temp.dateOfoining);
			System.out.println("------------------------------------------------------------------");
			// System.out.println("Employee department: " + temp.dept);
			// System.out.println("Employee salary: " + (temp.basic + temp.hra + temp.da));1

		} else {
			System.out.println("Employee not found");
		}
	}

}

