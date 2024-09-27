import java.util.Scanner;

// public class factorial {
//     public static int calfact(int n){
//         int prod=1;
//         for(int i=n;i>0;i--){
//             prod=prod*i;
            
//         }
//         return prod;
//     }
//     public static void main(String args[]){
//         Scanner sc=new Scanner(System.in);
//         int n=sc.nextInt();
//         System.out.println("The factorial of the number is "+ calfact(n));
//     }
// }

public class factorial {
    public static void calfact(int n){
        int prod=1;
        for(int i=n;i>0;i--){
            prod=prod*i;
            
        }
        System.out.println("The factorial is: "+prod);
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        calfact(n);
    }
}

