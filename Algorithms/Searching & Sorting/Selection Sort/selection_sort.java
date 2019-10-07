public class SelectionSort {
    public static void main(String[] args) {

        int[] arr = {2, 5, 1, 7, 9, 4};
        System.out.println("sorted array is");
        sort(arr);

        for (int i1 : arr) {
            System.out.print(i1 + " ");
        }

    }

    private static void sort(int[] arr) {

        int n = arr.length;

        for (int i = 0; i < n-1; i++) {

            int midx = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[midx]) {
                    midx = j;
                }
            }

            int temp = arr[midx];
            arr[midx] = arr[i];
            arr[i] = temp;
        }
    }
}