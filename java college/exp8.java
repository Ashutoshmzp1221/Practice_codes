import java.util.Scanner;

public class exp8 {

    public static String findPalindrome(String word) {
        String hold = "";
        String palindrome = "";
        int len = 0;
        for (int i = 0; i < word.length(); i++) {
            for (int j = i + 1; j <= word.length(); j++) {
                hold = word.substring(i, j);
                if (new StringBuilder(hold).reverse().toString().equals(hold) && hold.length() > len) {
                    palindrome = hold;
                    len = palindrome.length();
                }
            }
        }
        return palindrome;
    }

    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.println("\nCode by: Ashutosh Dwivedi");
        System.out.println("UID: 21BCS2617\n");

        System.out.println("Enter the string : ");
        str = sc.nextLine();
        String string = findPalindrome(str);
        if (!string.isEmpty()) {
            System.out.println("The longest Substring which is palindrome is: " + string);
        } else {
            System.out.println("No palindrome substring found.");
        }
        sc.close();
    }
}
