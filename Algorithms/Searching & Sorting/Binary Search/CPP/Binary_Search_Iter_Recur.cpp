#include <stdio.h> 

//Recursive Method
int binarySearchR(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 

        if (arr[mid] == x) 
            return mid; 

        if (arr[mid] > x) 
            return binarySearchR(arr, l, mid - 1, x); 

        return binarySearchR(arr, mid + 1, r, x); 
    } 

    return -1; 
} 

//Iterative Method
int binarySearchI(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 

        if (arr[m] == x) 
            return m; 

        if (arr[m] < x) 
            l = m + 1; 

        else
            r = m - 1; 
    } 

    return -1; 
} 

int main(void) 
{ 
	int n;
	printf("Size : ");
	scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int op;
    printf("Enter choice : \n 1. Recursive Method \n 2. Iterative Method ");
    scanf("%d",&op);

    int x;
    printf("Value to search : ");
    scanf("%d",&x);

    int result;

	if(op==1)
    result = binarySearchR(arr, 0, n - 1, x); 
    else 
    result = binarySearchI(arr, 0, n - 1, x);

    (result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", result); 
    return 0; 
} 
