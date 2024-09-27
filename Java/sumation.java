import java.util.Scanner;

public class sumation {
    public static int digitSum(int n)
    {
        int rem, sum = 0;
        while(n>0)
        {
            rem = n % 10;
            sum = sum + rem;
            n = n/10;
        }
        while(sum >= 10)
        {
            int r = 0;
            while(sum > 0)
            {
                rem = sum % 10;
                r = r + rem;
                sum = sum/10; 
            }
            sum = r;
        }
        return sum;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int r = digitSum(n);
        System.out.println(r);
        sc.close();
    }
}
