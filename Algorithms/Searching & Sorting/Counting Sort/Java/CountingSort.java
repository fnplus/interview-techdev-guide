class CountingSort { 
	
	void sort(int arr[]) { 
		int n = arr.length; 

		int output[] = new int[n]; 

		int count[] = new int[256]; 
		for (int i=0; i<256; ++i) 
			count[i] = 0; 

		for (int i=0; i<n; ++i) 
			++count[arr[i]]; 


		for (int i=1; i<=255; ++i) 
			count[i] += count[i-1]; 

		for (int i = n-1; i>=0; i--) 
		{ 
			output[count[arr[i]]-1] = arr[i]; 
			--count[arr[i]]; 
		} 

		for (int i = 0; i<n; ++i) 
			arr[i] = output[i]; 
	} 

	// Driver method 
	public static void main(String args[]) 
	{ 
		CountingSort ob = new CountingSort(); 
		int arr[] = {10,5,8,4,6,8,7,6,9,23,13,84,94,64,21,84,10,52.57}; 

		ob.sort(arr); 

		System.out.print("Sorted character array is "); 
		for (int i=0; i<arr.length; ++i) 
			System.out.print(arr[i]); 
	} 
} 
