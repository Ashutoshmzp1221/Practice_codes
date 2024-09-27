class point{
    int x, y;
    void setpoint(int a, int b)
    {
        x = a;
        y = b;
    }
}

public class pass {
    public static void main(String args[])
    {
        point mypoint = new point();
        mypoint.setpoint(5, 6);
        System.out.println("The point which we had enter: "+mypoint.x+", "+mypoint.y);
    }
}
