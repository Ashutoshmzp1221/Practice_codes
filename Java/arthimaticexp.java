public class arthimaticexp {
    public static void main(String args[]){
        try{
            int a = 20;
            int b = 0;
            int c = a/b;
            System.out.println("Result : "+c);
        }
        catch(ArithmeticException e){
            System.out.println("We can't divide any number by zero.");
        }
    }
}
