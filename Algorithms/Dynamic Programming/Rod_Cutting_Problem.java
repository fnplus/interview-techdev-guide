// Java recursive solution for Rod cutting problem
class GFG {

	/* Returns the best obtainable price for a rod of length
	n and price[] as prices of different pieces */
	static int cutRod(int price[], int index, int n)
	{
		// base case
		if (index == 0) {
			return n * price[0];
		}
		// At any index we have 2 options either
		// cut the rod of this length or not cut
		// it
		int notCut = cutRod(price, index - 1, n);
		int cut = Integer.MIN_VALUE;
		int rod_length = index + 1;

		if (rod_length <= n)
			cut = price[index]
				+ cutRod(price, index, n - rod_length);

		return Math.max(notCut, cut);
	}

	/* Driver program to test above functions */
	public static void main(String args[])
	{
		int arr[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
		int size = arr.length;
		System.out.println("Maximum Obtainable Value is "
						+ cutRod(arr, size - 1, size));
	}
}


