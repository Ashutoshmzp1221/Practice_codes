import java.util.Scanner;

public class solid_rectangle {
    public static void main(String args[]){
        System.out.println("Enter the number of the rows and the coloms: ");
        Scanner sc=new Scanner(System.in);
        int row=sc.nextInt();
        int col=sc.nextInt();

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}