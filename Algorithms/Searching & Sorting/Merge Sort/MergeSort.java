
/*
 * Java Program to sort an integer array using merge sort algorithm.
 */

public class MergeSort {

  public static void main(String[] args) {

    int[] input = { 87, 57, 370, 110, 90, 610, 02, 710, 140, 203, 150 };

    System.out.println("Before sorting");
    for(int a: input){
      System.out.print(a + ", ");
    }

    mergesort(input);

    System.out.println("After sorting");
    for(int b: input){
      System.out.print(b + ", ");
    }

  }

  /**
   * Initial method
   * @param input
   */
  public static void mergesort(int[] input) {
    mergesort(input, 0, input.length - 1);
  }

  /**
   * Divide input array recursively, sort it.
   * @param input array to be sorted
   * @param start index of first element in array
   * @param end index of last element in array
   */
  private static void mergesort(int[] input, int start, int end) {

    // Divide Array
    int mid = (start + end) / 2;
    int i = 0, first = start, last = mid + 1;
    
    if (start < end) {
      mergesort(input, start, mid);
      mergesort(input, mid + 1, end);
    }

    //Shift elements and merge into final array
    int[] tmp = new int[end - start + 1];

    while (first <= mid && last <= end) {
      tmp[i++] = input[first] < input[last] ? input[first++] : input[last++];
    }
    while (first <= mid) {
      tmp[i++] = input[first++];
    }
    while (last <= end) {
      tmp[i++] = input[last++];
    }
    i = 0;
    while (start <= end) {
      input[start++] = tmp[i++];
    }
  }
}
