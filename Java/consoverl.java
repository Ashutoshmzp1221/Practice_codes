public class consoverl {
    int id;
    String name;
    consoverl()
    {
        System.out.println("This is a non permiterized constructor");
    }

    consoverl(int i, String n)
    {
        id = i;
        name = n;
    }

    public static void main(String args[])
    {
        consoverl s = new consoverl();
        System.out.println("Default COnstructor");
        System.out.println("Sudent id = "+s.id);
    }
    
}
