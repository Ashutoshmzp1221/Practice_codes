import java.util.*;
public class twodarray {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of the rows of the matrix: ");
        int row = sc.nextInt();
        System.out.println("Enter the number of the columns of the matrix: ");
        int col = sc.nextInt();
        int [][]arr=new int [row][col];

        System.out.println("Enter the elements of the array: ");
        for(int i = 0; i < row ; i++)
        {
            for(int j = 0; j < col; j++)
            {
                arr[i][j] = sc.nextInt();
            }
        }
        sc.close();
    }
}
