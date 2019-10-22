#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
	return;
}

int *heapify(int *arr, int n, int i){
	int largest = i;
	int l = 2*i + 1;
	int r = 2*i + 2;

	if (l < n && arr[l] > arr[largest])
		largest = 1;

	if (r < n && arr[r] > arr[largest])
		largest = r;

	if (largest != i){
		swap(&arr[i], &arr[largest]);
		arr = heapify(arr, n, largest);
	}

	return arr;
}

int * heapsort(int size, int *array){
	int i, j;
	for ( i = size / 2 - 1; i >= 0; i--){
		array = heapify(array, size, i);
	}
	
	for(i = size-1; i>=0; i--){
		swap(&array[0], &array[i]);
		array = heapify(array, i, 0);
	}
	
	return array;
}

void printArray(int size, int *array){
	int i;
	
	if(size == 0){
		printf("Your array has no elements :(\n");
		return;		
	}	
	
	printf("Ordered array: |");
	for(i=0;i<size;i++){
		printf(" %d |", array[i]);		
	}
	printf("\n");

	return;
}

int main(){
	
	int *array;
	int size;
	int i;
	
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	array = (int *) malloc(size * sizeof(int));
	
	for(i=0;i<size;i++){
		printf("Enter the element %d of the array: ", i);
		scanf("%d", &array[i]);
	}

	array = heapsort(size, array);
	
	printArray(size, array);	

	return 0;
}
