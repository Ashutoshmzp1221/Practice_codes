import java.util.Scanner;

public class half_pyramid_num {
    public static void main(String args[]){
        System.out.println("Enter the number of the row: ");
        Scanner sc=new Scanner(System.in);
        int row=sc.nextInt();

        for(int i=1;i<=row;i++){
            for(int j=1;j<=i;j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }

    }
}
