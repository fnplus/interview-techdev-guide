import java.util.Arrays;
import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {

        int[] arr = {3,6,8,12,18};
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter no to search");
        int n = scanner.nextInt();
        Arrays.sort(arr);
        System.out.println(binarySearch(arr, 0, arr.length - 1, n));

    }

    private static int binarySearch(int[] arr, int lo, int hi, int item) {

        int mid = (lo + hi) / 2;
        if (item > arr[mid]) {
            lo = mid + 1;
            return binarySearch(arr, lo, hi, item);
        } else if (item >= arr[mid]) {
            return mid;
        } else if (item < arr[mid]) {
            hi = mid -1;
            return binarySearch(arr, lo, hi, item);
        } else
            return -1;

    }
}