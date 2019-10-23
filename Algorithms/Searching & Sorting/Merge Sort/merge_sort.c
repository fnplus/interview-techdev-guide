#include<stdlib.h> 
#include<stdio.h> 
  
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    //merges two subarrays of arr[], i.e. arr[l..m] and arr[m+1..r]
  
    int L[n1], R[n2]; 
	//created twwo temp arrays  

    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
    //copies data to arrays
  
    i = 0; //first subarray 
    j = 0; //econd subarray 
    k = l; //merged subarray

    while (i < n1 && j < n2)  // merges the temp arrays back to arr[l..r] 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  

    while (i < n1) //copies remaining elements of L[]
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) //copies remaining elements of r[]
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  

void mergeSort(int arr[], int l, int r) // L is left index and r is right index of sub array to be sorted
{ 
    if (l < r) 
    { 

        int m = (l+r)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

int main() 
{ 
	//scanning array to sort
	printf("Enter size of array to be sorted \n");
	int arr_size;
	scanf("%d", &arr_size);
	int arr[arr_size];
	printf("Enter array \n");
	int i;
	for(i=0;i<arr_size;i++) 
		scanf("%d", &arr[i]);
  
  	//to sort array, we call function
    mergeSort(arr, 0, arr_size - 1); 
  
    //printing final sorted array
    printf("\nSorted array is \n"); 
    for (i=0; i < arr_size; i++) 
    	printf("%d ", arr[i]); 
    printf("\n");

    return 0; 
} 
