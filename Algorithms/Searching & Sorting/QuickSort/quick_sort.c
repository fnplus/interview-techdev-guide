#include<stdio.h>

int partiton(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    
    for(int j = low; j <= high-1;j++) {
        if(arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i+1);
}

void quicksort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partiton(arr, low, high);
        quicksort(arr, low, pi-1);
        quicksort(arr,pi+1, high);
    }
}

int main() {
    int n,arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements now: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Before sort: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    quicksort(arr, 0, n-1);

    printf("\nAfter sort: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}