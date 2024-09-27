import java.util.HashSet;
import java.util.Scanner;

public class Expy {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of cards you want to enter");
        int n = sc.nextInt();
        sc.nextLine(); 
        HashSet<Character> hs = new HashSet<>();
        while(n-- > 0) {
            System.out.println("Enter a card");
            hs.add(sc.nextLine().charAt(0)); 
        }
        System.out.println("Unique symbols are as follows \n" + hs);
        sc.close();
    }
}
