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
