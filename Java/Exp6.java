import java.util.Scanner;
import java.util.ArrayList;

class StringListMenu {
    private ArrayList<String> list;

    public StringListMenu() {
        list = new ArrayList<String>();
    }

    public void insertString(String str) {
        list.add(str);
    }

    public void deleteString(String str) {
        if (list.contains(str)) {
            list.remove(str);
            System.out.println("'" + str + "' removed from the list!");
        } else {
            System.out.println("'" + str + "' not found in the list!");
        }
    }

    public void displayList() {
        if (!list.isEmpty()) {
            System.out.println("Items in the list:\n");
            for (int i = 0; i < list.size(); i++) {
                System.out.println((i + 1) + ". " + list.get(i));
            }
        } else {
            System.out.println("List is empty.");
        }
    }

    public void searchString(String str) {
        if (list.contains(str)) {
            System.out.println("'" + str + "' found in the list.");
        } else {
            System.out.println("'" + str + "' not found in the list.");
        }
    }
}

public class Exp6 {
    public static void main(String[] args) {
        System.out.println("\nCode by: Ashutosh Dwivedi");
        System.out.println("UID: 21BCS2617\n");
        StringListMenu stringList = new StringListMenu();

        try (Scanner input = new Scanner(System.in)) {
            int choice = 0;

            do {
                System.out.print("\nSelect operation: \n");
                System.out.println("1. Insert a String in the list: ");
                System.out.println("2. Delete a String from the list: ");
                System.out.println("3. Display the list: ");
                System.out.println("4. Search for a string in the list: ");
                System.out.println("5. Exit\n");

                try {
                    choice = input.nextInt();
                    input.nextLine();
                    if (choice < 1 || choice > 5) {
                        throw new IllegalArgumentException("Invalid choice! Please enter a number between 1 and 5.");
                    }
                } catch (Exception e) {
                    System.out.println("Error: " + e.getMessage());
                    System.exit(0);
                }

                switch (choice) {
                    case 1:
                        try {
                            System.out.print("Enter the string to be inserted: ");
                            String insertString = input.nextLine();
                            stringList.insertString(insertString);
                            System.out.println("'" + insertString + "' inserted into the list!");
                        } catch (Exception e) {
                            System.out.println("Error: " + e.getMessage());
                        }
                        break;

                    case 2:
                        try {
                            System.out.print("Enter the string to be deleted: ");
                            String deleString = input.nextLine();
                            stringList.deleteString(deleString);
                            System.out.println("\n");
                            stringList.displayList();
                        } catch (Exception e) {
                            System.out.println("Error: " + e.getMessage());
                        }
                        break;

                    case 3:
                        try {
                            stringList.displayList();
                        } catch (Exception e) {
                            System.out.println("Error: " + e.getMessage());
                        }
                        break;

                    case 4:
                        try {
                            System.out.print("Enter the string to be searched: ");
                            String searchString = input.nextLine();
                            stringList.searchString(searchString);
                        } catch (Exception e) {
                            System.out.println("Error: " + e.getMessage());
                        }
                        break;

                    case 5:
                        System.out.println("Exiting the program...bye bye...🙌🙌");
                        System.exit(0);
                        break;
                    default:
                    System.out.println("Invalid Operation try again😊😊");
                }
            } 
            while (choice != 5);
        }
    }
}
