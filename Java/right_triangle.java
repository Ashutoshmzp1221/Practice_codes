import java.util.Scanner;

public class right_triangle {
    public static void main(String args[]){
        System.out.println("Enter the number of the row: ");
        Scanner sc= new Scanner(System.in);
        int row=sc.nextInt();

        for(int i=0;i<row;i++){
            for(int j=0;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}
