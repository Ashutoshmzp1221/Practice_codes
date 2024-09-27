public class Video {
    private String title;
    private boolean isCheckedOut;
    private double averageRating;
    private int ratingCount;

    public Video(String title) {
        this.title = title;
        this.isCheckedOut = false;
        this.averageRating = 0.0;
        this.ratingCount = 0;
    }

    public void checkOut() {
        this.isCheckedOut = true;
    }

    public void returnVideo() {
        this.isCheckedOut = false;
    }

    public void receiveRating(int rating) {
        averageRating = (averageRating * ratingCount + rating) / (++ratingCount);
    }

    public String getTitle() {
        return title;
    }

    public boolean isCheckedOut() {
        return isCheckedOut;
    }

    public double getAverageRating() {
        return averageRating;
    } 
}
