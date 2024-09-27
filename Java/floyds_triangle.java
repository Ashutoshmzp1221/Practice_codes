import java.util.Scanner;

public class floyds_triangle {
    public static void main(String args[]){
        System.out.println("Enter the number of the rows: ");
        Scanner sc =new Scanner(System.in);

        int row=sc.nextInt();
        int cout=1;
        for(int i=1;i<=row;i++){
            for(int j=1;j<=i;j++){
                System.out.print(cout++ +" ");
            }
            System.out.println();
        }
    }
}
