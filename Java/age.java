import java.util.*;
public class age{
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the age: ");
        int a=sc.nextInt();
        if(a>18){
            System.out.println("The person is adult");
        }
    }
}