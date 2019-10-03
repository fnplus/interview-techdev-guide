#include <stdio.h>

void linear_search(int *arr, int n, int x)
{
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("Element found at index %d", i);
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("Element is not present inside the array");
    }
}

void display(int *arr, int n)
{
    printf("\n\n");
    for (int i = 0; i < n; i++)
        printf(" %d", arr[i]);
}

int main()
{

    int n;
    printf("\n\nEnter number of elements ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    display(arr, n);

    int find;
    printf("\n\nEnter which element you want to search ");
    scanf("%d", &find);

    linear_search(arr, n, find);

    return 0;
}
