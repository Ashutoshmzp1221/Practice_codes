import java.io.*;
import java.math.*;
import java.util.*;
public class test {
    public static void main(String args[])
    {
        System.out.println("Enter the numbe: ");
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        int a = num;
        int rem, new_num=0;
        int j=4;

        while(num>0)
        {
            rem = num%10;
            num = num/10;
            new_num = new_num + rem*(int)Math.pow(10,j);
            j--;
        }
        if(new_num == a){
            System.out.println("The number is palindrome");
        }

        else{
            System.out.println("The number is not palindrome");
        }
    }
}
