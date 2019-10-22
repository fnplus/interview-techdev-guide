//Binary search - Recursive method
#include <stdio.h>
#define MAX 1000
int binarySearch(int ar[], int l, int r, int search)
{
	if (l<=r)
	{
		int mid = (l+r)/2;
		if (ar[mid] == search) // we have found our search element
			return mid;
		else if (ar[mid] > search) // the element must be present in the left subarray
			binarySearch(ar, l, mid-1, search);
		else
			binarySearch(ar, mid+1, r, search); // the element must be present in the right subarray
	}
	return -1;
} 
int main()
{
	int N, i, key;
	int ar[MAX];
	printf ("Enter no of integers in the array:\n");
	scanf ("%d", &N);
	printf ("\nEnter the elements in a sorted array:\n");
	for (i=0; i<N; i++)
	{
		scanf ("%d", &ar[i]);
	}
	printf ("\nEnter the element to search:\n");
	scanf ("%d", &key);
	int pos = binarySearch(ar, 0, N-1, key);
	if (pos == -1)
		printf ("%d is not present in the array!", key);
	else
		printf ("%d is present at index %d", key, pos);
	return 0;
}
