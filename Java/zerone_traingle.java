import java.util.*;
public class zerone_traingle {
    public static void main(String args[]){
        System.out.println("Enter the number of the rows: ");
        Scanner sc= new Scanner(System.in);
        int row=sc.nextInt();
        for(int i=1;i<=row;i++){
            for(int j=1;j<=i;j++){
                if(i%2!=0 && j%2!=0){
                    System.out.print("1 ");
                }
                else if(i%2==0 && j%2!=0){
                    System.out.print("0 ");
                }
                else if(i%2!=0 && j%2==0){
                    System.out.print("0 ");
                }
                else{
                    System.out.print("1 ");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}
