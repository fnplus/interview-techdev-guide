import java.util.Arrays;

public class InsertionSort {

    public static void main(String[] args) {
        int data[] = {52,31,25,12,48,44,38,9,37,29,43,16,22,28,41};
        sort(data);
        System.out.println(Arrays.toString(data));
    }

    public static void sort(int data[]){
        int length = data.length;
        for(int i = 1; i < length; ++i){
            int valueInsert = data[i]; // copy of value to be inserted
            int indexSpace = i; // index space where item to be inserted was

            while(indexSpace > 0 && data[indexSpace - 1] > valueInsert) {
                data[indexSpace] = data[indexSpace -1];
                indexSpace = indexSpace - 1;
            }
            data[indexSpace] = valueInsert; //located space to insert the item within sorted list
        }
    }
}
