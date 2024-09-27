import java.util.Scanner;

public class inverse_right_triangle {
    public static void main(String args[]){
        System.out.println("Enter the number of the row: ");
        Scanner sc= new Scanner(System.in);
        int row=sc.nextInt();

        for(int i=row;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.printf("*");
            }
            System.out.println();
        }
        sc.close();
    }
}
