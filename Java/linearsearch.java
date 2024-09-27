import java.util.*;
public class linearsearch {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int x[] = new int [n] ;
        int pos = 0;
        System.out.println("Enter the values in the arrray: ");
        for(int i=0; i<n; i++){
            x[i] = sc.nextInt();
        }

        System.out.println("Enter the number you want to search: ");
        int num = sc.nextInt();
    
        for(int i=0; i<n ; i++){
            if(x[i] == num) {
                pos=i+1;
            }
        }
        System.out.println("The position of the entered number is "+pos);
        sc.close();
    }
}
