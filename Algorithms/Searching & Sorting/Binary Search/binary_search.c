#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void binary(int *  arr, int b, int n , int find)
{

if( n>=b )
{
int mid = (b+n)/2 ;
if(arr[mid] == find)printf("\n\nELement found at %d ",mid); 


if (arr[mid]<find)
	binary(arr,mid + 1 ,n, find);

else
	binary(arr,0,mid -1, find);

}

}

void display( int * arr, int n )
{
printf("\n\n");
for(int i = 0 ; i < n ; i++)
printf(" %d",arr[i]);
}




int main()
{
srand((unsigned) time(NULL));

int n;
printf("\n\nEnter number of elements ");
scanf("%d", &n);
int arr[n];

for(int i = 0 ; i < n ; i++ )
scanf("%d",&arr[i]); 

display(arr,n);

int find ;
printf("\n\nEnter which element you want to search ");
scanf("%d",&find);

binary(arr,0,n-1,find);

return 0;
}
