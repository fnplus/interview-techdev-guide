public class HeapSort {

	private int n;

	public HeapSort() {
	}

	public int[] sort(int[] array) {
		buildHeap(array);

		for (int i = n; i > 0; i--) {
			swap(array, 0, i);
			n -= 1;
			maxHeap(array, 0);
		}

		return array;
	}

	private void buildHeap(int[] a) {
		n = a.length - 1;
		for (int i = n / 2; i >= 0; i--) {
			maxHeap(a, i);
		}
	}

	private void maxHeap(int[] a, int i) {
		int left = 2 * i;
		int right = 2 * i + 1;
		int largest = 0;

		if (left <= n && a[left] > a[i]) {
			largest = left;
		} else {
			largest = i;
		}
		
		if (right <= n && a[right] > a[largest]) {
			largest = right;
		} 
		
		if (largest != i) {
			swap(a, i, largest);
			maxHeap(a, largest);
		}
	}

	private void swap(int a[], int i, int j) {
		int tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
	
	public static void main (String args[]) {
		int testArray[] = {3, 5, 1, 0, 9, 7, 4, 8, 2, 6};
		
		HeapSort heapSort = new HeapSort();
		int sortedArray[] = heapSort.sort(testArray);
		
		for (int i=0; i < sortedArray.length; i++) {
			System.out.print(sortedArray[i] + " ");
		}
	}

}
