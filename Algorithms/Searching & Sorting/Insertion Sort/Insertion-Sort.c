#include <stdio.h>
void insertionSort(int array[], int size)
{
  for (int i = 1; i < size; i++)
  {
    int temp = array[i];
    int j = i - 1;
    while (temp < array[j] && j >= 0)
    {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = temp;
  }
}
void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}
int main()
{
  int arr[] = {9, 5, 1, 4, 3};
  int size = sizeof(arr) / sizeof(arr[0]);
  insertionSort(arr, size);
  printf("Sorted array :\n");
  printArray(arr, size);
}
