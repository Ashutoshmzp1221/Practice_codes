import java.util.*;
public class testdata {
    public static void main(String args[]){
        int choice, pm;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1 for section A "+"\n"+"Enter 2 for section b data");
        choice = sc.nextInt();

        switch(choice){
            case 1:
            pm = sc.nextInt();
            if(pm>=90 && pm<= 100)
                System.out.println("Grade A");
            else if(pm>=70 && pm<90)
                System.out.println("Grade B");
            else if(pm>=50 && pm<70)
                System.out.println("Grade c");
            else if(pm>=35 && pm< 50)
                System.out.println("Pass");
            else
                System.out.println("Fail");
            break;

            case 2:
            pm = sc.nextInt();
            if(pm>=90 && pm<= 100)
                System.out.println("Grade A");
            else if(pm>=70 && pm<90)
                System.out.println("Grade B");
            else if(pm>=50 && pm<70)
                System.out.println("Grade c");
            else if(pm>=35 && pm< 50)
                System.out.println("Pass");
            else
                System.out.println("Fail");
            break;

        }

    }
}
