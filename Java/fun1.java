import java.util.Scanner;

public class fun1 {
    public static void printMyname(String str){
        str=sc.next();
        System.out.println("My name is: "+str);
    }
    public static void main(String args[]){
        String str;
        Scanner sc= new Scanner(System.in);
        str = sc.next();
        printMyname(str);

        System.out.println();
        sc.close();
    }
}
