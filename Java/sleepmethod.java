import java.lang.*;
class threadex extends Thread{
    public void run(){
        for(int i = 0; i < 3; i++){
            try{
                sleep((int)(Math.random() * 5000));
            }
            catch(InterruptedException e){
                System.out.println(i);
            }
        }
    }
}


public class sleepmethod {
    public static void main(String args[]){
        new threadex().start();
        new threadex().start();
        System.out.println("Done");
    }
}
