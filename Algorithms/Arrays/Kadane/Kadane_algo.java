import java.util.Scanner;

public class Kadans_Algorithm {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int n = sc.nextInt();
        System.out.println("Enter the elements of the array");
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        int csum = arr[0];
        int osum = arr[0];

        for (int i = 1; i < arr.length; i++) {
            if (csum < 0) {
                csum = arr[i];
            } else {
                csum += arr[i];
            }

            if (csum > osum) {
                osum = csum;
            }
        }
        System.out.println("Max sum is "+osum);
    }
}