import java.util.*;
abstract class shap{
    abstract void shape();
    abstract int area();
}

class rectangle extends shap{
    void shape(){
        System.out.println("The shape is rectangle");
    }
    int area(){
        int a = 20 , b = 10;
        return a*b;
    }
}

class circle extends shap{
    int area(){
        int r;
        Scanner sc = new Scanner(System.in);
        r = sc.nextInt();
        int area1;
        area1 = (3*r*r);
        sc.close();
        return area1;
    }

    void shape(){
        System.out.println("The shape is circle");
    }
}

class new1 {
    public static void main(String args[]){
        shap r = new rectangle();
        shap c = new circle();
        r.shape();
        c.area();
    }
}
