import java.util.*;
public class findingelementin2darray {
    public static void main(String args[])
    {
        Scanner sc = new Scanner (System.in);
        int row = sc.nextInt();
        int col = sc.nextInt();

        int [][]arr = new int [row][col];

        for(int i=0; i<row ;i++)
        {
            for(int j=0; j<col ; j++)
            {
                arr[i][j] = sc.nextInt();
            }
        }

        System.out.println("Enter the element you want to search: ");
        int num = sc.nextInt();

        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<col ; j++)
            {
                if(arr[i][j]==num)
                {
                    System.out.println("The number is in the "+i+"th row of "+j+"th column.");
                    break;
                }
            }
        }
        sc.close();
    }
}