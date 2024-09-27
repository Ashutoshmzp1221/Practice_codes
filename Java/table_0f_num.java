import java.util.Scanner;

public class table_0f_num {
    public static void main(String args[]){
        System.out.println("Enter the number: ");
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();

        int tab;
        for(int i=1;i<=10;i++){
            tab=num*i;
            System.out.print(tab+" ");
        }
        sc.close();
    }
}
