import java.util.*;

public class bubbleSort
{

	public int[] input(int a[])			//Input array elements
	{
		Scanner sc = new Scanner(System.in);
		int n =a.length;

		System.out.print("Enter Elements to array : ");
		for(int i=0;i<n;i++)
			a[i] = sc.nextInt();

		return a;

	}

	public int[] sort(int a[])		// Bubble sort array ----- complexity O(n^2)
	{
	int n = a.length;

	for(int i=0;i<n;i++)
				for(int j=i;j<n;j++)
				{
					if(a[i] > a[j])
					{
						int temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}

	 return a;
	}

	public void display(int a[])    	// Display sorted array
	{
		int n = a.length;

		System.out.println("Sorted Array");
		for(int i=0;i<n;i++)
			System.out.print(" " + a[i]);
		System.out.println();
	}

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter elements in array : ");
		int n = sc.nextInt();
		int a[] = new int[n];

		
		//sorting

		bubbleSort bSort = new bubbleSort();

		a = bSort.input(a);				// Accept input from user
		a = bSort.sort(a);				// BubbleSort the array
		bSort.display(a);				// Display sorted array

	}
}