import java.util.Scanner;

public class inverted_half_pyramid_num {
    public static void main(String args[]){
        System.out.println("Enter the number of the rows: ");
        Scanner sc= new Scanner(System.in);
        int row=sc.nextInt();

        for(int i=row;i>0;i--){
            for(int j=1;j<=i;j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}
