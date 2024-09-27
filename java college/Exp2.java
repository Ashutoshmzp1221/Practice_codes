import java.util.*;

public class Exp2 {
    public static void main(String[] args) {
        VideoStore store = new VideoStore();
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\nChoose an action:");
            System.out.println("1. Add a Video");
            System.out.println("2. Check Out a Video");
            System.out.println("3. Return a Video");
            System.out.println("4. Rate a Video");
            System.out.println("5. List Inventory");
            System.out.println("6. Exit");
            System.out.print("Enter your choice (1-6): ");

            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume newline left-over

            switch (choice) {
                case 1:
                    System.out.print("Enter the title of the video you want to add: ");
                    String title = scanner.nextLine();
                    store.addVideo(title);
                    break;
                case 2:
                    System.out.print("Enter the title of the video you want to check out: ");
                    title = scanner.nextLine();
                    store.checkOut(title);
                    break;
                case 3:
                    System.out.print("Enter the title of the video you want to return: ");
                    title = scanner.nextLine();
                    store.returnVideo(title);
                    break;
                case 4:
                    System.out.print("Enter the title of the video you want to rate: ");
                    title = scanner.nextLine();
                    System.out.print("Enter your rating: ");
                    int rating = scanner.nextInt();
                    store.receiveRating(title, rating);
                    break;
                case 5:
                    store.listInventory();
                    break;
                case 6:
                    System.out.println("Exiting...");
                    return;
                default:
                    System.out.println("Invalid choice. Please enter a number between 1 and 6.");
            }
        }
    }
}
