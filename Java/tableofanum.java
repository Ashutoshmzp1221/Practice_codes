import java.util.*;
public class tableofanum {
    public static void main(String args[])
    {
        System.out.println("Enter the number: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println("------------------------------");
        for(int i=1 ; i<=10 ; i++)
        {
            System.out.println(num+" X "+i+" = "+num*i);
        }
        System.out.println("------------------------------");
        sc.close();
    }
}
