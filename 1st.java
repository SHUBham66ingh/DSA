import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class StreamSquare {

    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.println("Enter the size of the list");
        int size = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        System.out.println("Enter the elements of the list");
        for(int i = 0; i < size; i++){
            arr.add(sc.nextInt());
        }
        List<Integer> list = arr.stream().filter(x -> x % 2 == 0 && x > 10).map(x -> x * x).collect(Collectors.toList());
        System.out.println("The square of even numbers greater than 10 are: ");
        System.out.println(list);
    }
}