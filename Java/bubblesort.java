import java.util.*;
public class bubblesort {
    public static void main(String args[]){
        System.out.println("Enter the number of the elements you want in the array: ");
        Scanner sc = new Scanner (System.in);
        int n=sc.nextInt();

        int []arr= new int [n+1];

        System.out.println("Enter the elements of the array: ");
        for(int i=0; i<n ;i++){
            arr[i]=sc.nextInt();
        }

        for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        System.out.println("The array after the sorting: ");

        for( int i = 0 ; i<n ; i++){
            System.out.println(arr[i]+" ");
        }
        sc.close();
    }
}
