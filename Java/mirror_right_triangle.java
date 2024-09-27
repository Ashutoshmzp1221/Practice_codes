import java.util.Scanner;

public class mirror_right_triangle {
    public static void main(String args[]){
        System.out.println("Enter the number of the rows: ");
        Scanner sc= new Scanner(System.in);
        int row=sc.nextInt();

        for(int i=1;i<=row;i++){
            for(int j=1;j<=row-i;j++){
                System.out.print(" ");
            }
            for(int k=1;k<=i;k++){
                System.out.print("*");
            }
            System.out.println();
        }

    }
}
