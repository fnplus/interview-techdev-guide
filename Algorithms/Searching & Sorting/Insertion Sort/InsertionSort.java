import java.util.*;
public class InsertionSort {

    public static void insertionSort(int[] array) {
        int holePosition;
        int valueToInsert;

        for (int i = 1; i < array.length; i++) {

            /* select value to be inserted */
            valueToInsert = array[i];
            holePosition = i;

            /*locate hole position for the element to be inserted */

            while (holePosition > 0 && array[holePosition - 1] > valueToInsert) {
                array[holePosition] = array[holePosition - 1];
                holePosition = holePosition - 1;
            }

            /* insert the number at hole position */
            array[holePosition] = valueToInsert;

        }
    }

    public static void main(String[] args) {
        int[] toSort = {
            58,
            8,
            46,
            12,
            54,
            8,
            64,
            7,
            564,
            364,
            0,
            185,
            48,
            4187,
            7454,
            5876,
            534,
            45,
            238,
            486,
            48,
            87,
            4,
            0
        };
        insertionSort(toSort);
        System.out.println(Arrays.toString(toSort));
    }
}