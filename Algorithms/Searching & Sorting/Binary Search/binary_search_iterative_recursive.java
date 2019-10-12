import java.util.Arrays;
import java.util.Scanner;

public class binarySearch {

    public static void main(String[] args) {
        int[] data = {5,12,16,18,23,27,28,34,38,43,47,50,53,59};
        System.out.println("Data = " + Arrays.toString(data));
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter target: ");
        int target = sc.nextInt();
        Arrays.sort(data);
        System.out.println("Iterative: " + iterative(data, target));
        System.out.println("Recursive: " + recursive(data, target, 0, data.length - 1));
    }

    public static boolean iterative(int[] data, int target){
        int start = 0;
        int end = data.length - 1;
        while (start <= end){
            int middle = (start + end) / 2;
            if (target < data[middle]){
                end = middle - 1;
            }
            else if (target > data[middle]){
                start = middle + 1;
            }
            else {
                return true;
            }
        }
        return false;
    }

    public static boolean recursive(int[] data, int target, int start, int end){
        if (start > end)
            return false;
        else {
            int middle = (start + end) / 2;
            if (target == data[middle]){
                return true;
            }
            else if(target < data[middle]) {
                return recursive(data, target, start, middle - 1);
            }
            else {
                return recursive(data, target, middle + 1, end);
            }
        }
    }
}
