class QuickSort { 
    static int partition(int elem[], int low, int high) { 
        int pivot = elem[high];  
        int i = (low-1); // index of smaller element 
        for (int j=low; j<high; j++)
            if (elem[j] < pivot) { // check scale for elements less than pivot
                i++; 
                int temp = elem[i]; 
                elem[i] = elem[j]; 
                elem[j] = temp;  // swap
            } 

        int temp = elem[i+1]; 
        elem[i+1] = elem[high]; 
        elem[high] = temp; // swap
        return i+1; 
    } 
  
    static void quickSort(int elem[], int low, int high) { 
        if (low < high) { 
            int pi = partition(elem, low, high); 
            quickSort(elem, low, pi-1); 
            quickSort(elem, pi+1, high); 
        } 
    } 
  
    // result_print
    static void print_result(int elem[]) {
        int n = elem.length; 
        for (int i=0; i<n; ++i) 
            System.out.print(elem[i]+" "); 
    } 
  
    // Driver function
    public static void main(String args[]) { 
        int elem[] = {9, 7, 2, 3, 7, 11, 01, 90, 12, 82}; 
        int n = elem.length; 
  
        QuickSort qsj = new QuickSort(); 
        qsj.quickSort(elem, 0, n-1);

        System.out.println("The sorted array is:"); 
        print_result(elem); 
    } 
}