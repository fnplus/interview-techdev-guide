#include<stdio.h>

int main() {
    int n, arr[100];
    printf("Enter no of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements now: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Before the sort: \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    //Bubble sort algo
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                //Swapping the elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nAfter the sort: \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}