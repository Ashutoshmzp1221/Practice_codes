class circle 
{
    double r;
    double circumference()
    {
        return 2*(22/7)*r;
    }
    double area(){
        return (22/7)*r*r;
    }
}

class box
{
    int length;
    int breadth;
    int area;

    int perimeter()
    {
        return 2*(length*breadth);
    }

    int area()
    {
        return length*breadth;
    }
}

public class moreclass {
    public static void main(String args[])
    {
        circle c = new circle();
        box b = new box();
        c.r = 7;
        b.length = 5;
        b.breadth = 4;
        System.out.println("The circumference of the circle is: "+c.circumference());
        System.out.println("The area of the circle is : "+c.area());
        System.out.println("The perimeter of the box = "+b.perimeter());
        System.out.println("the area of the box = "+b.area());
    }
}
