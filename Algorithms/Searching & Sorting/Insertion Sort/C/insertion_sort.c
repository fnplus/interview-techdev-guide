#include <stdio.h>

void insertionSort(int A[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int value = A[i];
        int space = i;
        while (space > 0 && A[space - 1] > value)
        {
            A[space] = A[space - 1];
            space--;
        }
        A[space] = value;
    }
}

int main()
{
    int A[] = {-3, 2, -1, -5, 6, 4, 0, 21, 100, -55, 310, 1000};

    printf("\nInput array is:");
    for (int i = 0; i < 12; i++)
        printf(" %d", A[i]);

    insertionSort(A, 12);

    printf("\nSorted array is:");
    for (int i = 0; i < 12; i++)
        printf(" %d", A[i]);
    printf("\n");

    return 0;
}
=======
// C program for insertion sort 
#include <math.h> 
#include <stdio.h> 

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) { 
		key = arr[i]; 
		j = i - 1; 

		/* Move elements of arr[0..i-1], that are 
		greater than key, to one position ahead 
		of their current position */
		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

// A utility function to print an array of size n 
void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

/* Driver program to test insertion sort */
int main() 
{ 
	int arr[] = { 12, 11, 13, 5, 6 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	insertionSort(arr, n); 
	printArray(arr, n); 

	return 0; 
}