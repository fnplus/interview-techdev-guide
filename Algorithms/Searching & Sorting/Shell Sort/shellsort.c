#include <stdio.h>

void shellsort(int size, int *arr) {
	// start with a big gap and reduce it
	for (int gap = size/2; gap > 0; gap = gap/2) {
		for (int i = gap; i < size; i = i+1) {
			int temp = arr[i];

			int j;
			// shifting elements until the location for arr[i] is found
			for (j = i; j >= gap && arr[j-gap] > temp; j = j-gap) {
				arr[j] = arr[j-gap];
			}
			arr[j] = temp;
		}
	}
}

int main() {
	int arr_size = 10;
	int arr[10] = {10, 9, 8, 7, 6, 5, 2, 50, 25, 26 };
	shellsort(arr_size, arr);

	for (int i = 0; i < arr_size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
