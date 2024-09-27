public class VideoStore {
    private Video[] videos;
    private int currentSize;

    public VideoStore() {
        videos = new Video[10];
        currentSize = 0;
    }

    public void addVideo(String title) {
        if (currentSize < videos.length) {
            videos[currentSize++] = new Video(title);
        } else {
            System.out.println("Inventory is full. Can't add more videos.");
        }
    }

    public void checkOut(String title) {
        for (int i = 0; i < currentSize; i++) {
            if (videos[i].getTitle().equals(title) && !videos[i].isCheckedOut()) {
                videos[i].checkOut();
                return;
            }
        }
        System.out.println("Video not found or already checked out.");
    }

    public void returnVideo(String title) {
        for (int i = 0; i < currentSize; i++) {
            if (videos[i].getTitle().equals(title) && videos[i].isCheckedOut()) {
                videos[i].returnVideo();
                return;
            }
        }
        System.out.println("Video not found or wasn't checked out.");
    }

    public void receiveRating(String title, int rating) {
        for (int i = 0; i < currentSize; i++) {
            if (videos[i].getTitle().equals(title)) {
                videos[i].receiveRating(rating);
                return;
            }
        }
        System.out.println("Video not found.");
    }

    public void listInventory() {
        for (int i = 0; i < currentSize; i++) {
            Video video = videos[i];
            System.out.println("Title: " + video.getTitle() + ", Checked out: " + video.isCheckedOut() + ", Average rating: " + video.getAverageRating());
        }
    }
}
