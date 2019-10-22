#include <stdio.h>

void selectionSort(int A[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (A[j] < A[min])
			{
				min = j;
			}
		}
		int temp = A[min];
		A[min] = A[i];
		A[i] = temp;
	}
}

int main()
{
	int A[] = {-3, 2, -1, -5, 6, 4, 0, 21, 100, -55, 310, 1000};

	printf("\nInput array is:");
	for (int i = 0; i < 12; i++)
		printf(" %d", A[i]);

	selectionSort(A, 12);

	printf("\nSorted array is:");
	for (int i = 0; i < 12; i++)
		printf(" %d", A[i]);
	printf("\n");

	return 0;
}