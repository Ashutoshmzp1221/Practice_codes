import java.util.Scanner;

public class solid_RHombus {
    public static void main(String args[]){
        Scanner sc = new Scanner( System.in);
        int row=sc.nextInt();

        for(int i=1;i<=row;i++){
            for(int j=1;j<=row-i;j++){
                System.out.print(" ");
            }
            for(int j=1;j<=5;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        sc.close();

    }
}
