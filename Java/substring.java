public class substring {
    public static void main(String args[])
    {
        String str = "My name is the Ashutosh Dwivedi";

        // Substring is the part of the string.
        /*  we use substring function to print the substring in this we give the begning index of the
         string and ending index of the string.
         substring(bigning inndex,ending index).
        */ 
        // Strings are the imutable.

        String name = str.substring(14,str.length());

        System.out.println(name);
    }
}
