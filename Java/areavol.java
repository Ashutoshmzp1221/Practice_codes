import java.util.*;

public class areavol {
    public static void area1()
    {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int b = sc.nextInt();
        int h = sc.nextInt();
        int area = 2*(l*b + b*h + h*l);
        int volume = l*b*h;
        System.out.println("The area = "+area);
        System.out.println("The volume = "+volume);
    }
    public static void area2(int l, int b, int h)
    {
        int area = 2*(l*b + b*h + h*l);
        int volume = l*b*h;
        System.out.println("The area = "+area);
        System.out.println("The volume = "+volume);
    }

    public static int area3(int l, int b, int h)
    {
        int area = 2*(l*b + b*h + h*l);
        return area;
        // return volume;
    }
    public static int vol1(int l, int b, int h)
    {
        int volume = l*b*h;
        return volume;
        // return volume;
    }
    

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int b = sc.nextInt();
        int h = sc.nextInt();
        area1();
        // area2(l,  b,  h);
        // int area = area3(l,b,h);
        // System.out.println("The area is "+area);
        // int volume = vol1(l,b,h);
        // System.out.println("The volume is "+volume);
    }
}
