import java.util.ArrayList;
import java.util.Collections;
public class arrayl {
    public static void main(String args[])
    {
        ArrayList<String> cars = new ArrayList<String>();
        cars.add("Volvo");
        cars.add("BMW");
        cars.add("Oddi");
        cars.add("Ford");
        System.out.println(cars);
        cars.get(0);
        cars.set(0,"Mahindra");
        System.out.println(cars);
        System.out.println(cars.size());
        cars.remove(0);
        System.out.println(cars);
        cars.clear();
        System.out.println(cars);

        ArrayList<Integer> my_numbers = new ArrayList<Integer>();
        my_numbers.add(25);
        my_numbers.add(10);
        my_numbers.add(5);
        my_numbers.add(50);
        System.out.println(my_numbers);
        Collections.sort(my_numbers);
        for(int i : my_numbers)
        {
            System.out.println(i);
        }
    }
}
