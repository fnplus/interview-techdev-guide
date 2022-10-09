#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    int n,z,tmp;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the array :\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        z=arr[i];
        for(int j=i-1; j>=0; j--)
        {
            if(z>arr[j])
            {
                break;
            }
            else if(z<arr[j])
            {
                tmp = arr[j];
                arr[j] = z;
                arr[j+1] = tmp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}