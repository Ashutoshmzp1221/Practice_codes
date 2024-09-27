import java.util.*;
class swtch_button{
    public static void main(String[] args){
        System.out.println("Enter the button number 1 or 2 or  3: ");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        switch(a){
            case 1: 
            System.out.println("Hello");
            break;
            case 2:
            System.out.println("Namste");
            break;
            case 3: 
            System.out.println("Hola");
            break;
            default: 
            System.out.println("Nothting");
        }
        sc.close();
    }
}