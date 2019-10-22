import java.util.Arrays;
import java.util.stream.IntStream;

/**
 * @author Rosemberg.Porras
 */
public class SelectionSort {

    public static void main(String[] args) {
	    int[]arrayToSort= IntStream.of(64,25,12,22,11).toArray();
	    System.out.println("Printing the original Array");
        System.out.println(Arrays.toString(arrayToSort));
        selectionSort(arrayToSort);
        System.out.println("///////////////////////////");
        System.out.println("Printing the sorted Array");
        System.out.println(Arrays.toString(arrayToSort));
    }

    private static void selectionSort(int[]arrayToSort){
        int lessValuePointer=0;

        for(int currentPointer=0; currentPointer<arrayToSort.length; currentPointer++){
            lessValuePointer=findLessValuePointer(arrayToSort,currentPointer);
            swap(currentPointer,lessValuePointer,arrayToSort);
        }
    }

    private static int findLessValuePointer(int[]arrayToFind, int startPointer){
        int lessPointerToReturn=startPointer;

        for(int currentPointer=startPointer;currentPointer<arrayToFind.length;currentPointer++){
            if(arrayToFind[lessPointerToReturn]>arrayToFind[currentPointer]){
                lessPointerToReturn=currentPointer;
            }
        }
        return lessPointerToReturn;
    }

    private static void swap(int currentPointer, int lessValuePointer, int[]array){
        int currentValue=array[currentPointer];
        array[currentPointer]=array[lessValuePointer];
        array[lessValuePointer]=currentValue;
    }
}
