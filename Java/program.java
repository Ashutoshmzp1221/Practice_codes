import java.util.*;
public class program {
    public static void main(String[] args) {
        System.out.println("Enter the employee id ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println("|Emp No.|" + "|Emp name|" + "Department" + "Designation" + "Salary");
        switch(num)
        {
            case 1001:
                System.out.println("|Emp No.|" + "|Emp name|" + "|Department|" + "|Designation|" + "|Salary|");
                System.out.println("| 1001  |" + "| Ashish |" + "|   R & D  |" + "|  Engineer||" + "| 41000|");
        }

    }
}
