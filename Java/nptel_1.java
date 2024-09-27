class circle
{
    double x,y;
    double r;
    double circumference()
    {
        return 2*3.14*r;
    }
    double area()
    {
        return (22/7)*r*r;
    }
}
class nptel_1 {
    public static void main(String args[])
    {
        circle c1 = new circle();
        c1.x = 0;
        c1.y = 0;
        c1.r = 7;
        System.out.println("The coordinates of the circle is : ("+c1.x+",)"+c1.y);
        System.out.println("The circumference of the circle is : "+c1.circumference());
        System.out.println("The area of the circle is: "+c1.area());
    }
}
