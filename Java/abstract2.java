abstract class shape{
    abstract void area();
}

class Rectangle extends shape{
    void area(){
        int a= 10;
        int b = 7;
        System.out.println("The area of the rectangle is: "+a*b);
    }
}
class Circle extends shape{
    void area(){
        int r = 10;
        System.out.println("The area of the rectangle is: "+3.14*r*r);
    }
}
class abstract2 {
    public static void main(String args[]){
        shape s = new Rectangle();
        s.area();
        shape p = new Circle();
        p.area();

    }
}
