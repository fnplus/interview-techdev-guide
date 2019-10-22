using System;

public class BubbleSort
{

	public int[] bubblesort(int[] array) {
		while(true) {
			int swap_count = 0;
			for(int i=0; i<array.Length-1; i++) {
				if(array[i]>array[i+1]) {
					int swap = array[i];
					array[i] = array[i+1];
					array[i+1] = swap;
					swap_count += 1;
				}
			}
			if(swap_count == 0) {
				break;
			}
		}
		return array;
	}

	public static void Main(string[] args)
	{
		int[] arr = new int[6]{1, 6, 2, 8, 2, 3};
		arr = new BubbleSort().bubblesort(arr);
		Console.WriteLine("Sorted array is");
		for(int i=0;i<arr.Length;i++) {
			Console.Write(arr[i] + " ");
		}
	}
}
