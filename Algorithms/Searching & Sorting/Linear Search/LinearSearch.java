
public class LinearSearch {

	static int search (int arr[], int x) {
		for (int i=0; i < arr.length; i++) {
			if (arr[i] == x) {
				return i; 
			}
		}
		
		return -1;
	}
	
	public static void main (String args[]) {
		int testArr[] = {1, 9, 8, 3, 0, 2, 5, 7, 4, 6};
		int testValue = 6;
		
		int position = search(testArr, testValue);
		if (position == -1) {
			System.out.println("Element was not found in the array");
		} else {
			System.out.println("Element found at position: " + position);
		}
	}
    
}