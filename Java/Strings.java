import java.util.Scanner;

public class Strings {
    public static void main(String args[])
    {
        String str;
        Scanner sc = new Scanner(System.in);

        str = sc.nextLine();

        System.out.println(str);
        System.out.println(str.length()); //length function

        //charAT function

        for(int i=0 ; i<str.length() ; i++)
        {
            System.out.println(str.charAt(i));
        }

        //comparing two strings;
        //for comparing we use the .compareto function it will return three things
        
        //1. s1>s2 -> reutrns a +ve value.
        //2. s1==s2 -> returns 0.
        //3. s1<s2 -> returns a -ve value

        String str1, str2;
        str1 = "Ashutosh";
        str2 = "Ashutosh";

        if(str1.compareTo(str2)==0)
        {
            System.out.println("Strings are equal");
        }
        sc.close();

    }
}
