#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[10], i, num, n, c=0, pos;
	printf("Enter the array size : ");
	scanf("%d",&n);
	printf("Enter Array Elements : ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be search : ");
	scanf("%d",&num);
	for(i=0; i<n; i++)
	{
		if(arr[i]==num)
		{
			c=1;
			pos=i+1;
			break;
		}
	}
	if(c==0)
	{
		printf("Number not found..!!");
	}
	else
	{
		printf("%d found at position %d",num, pos);
	}
	getch();
}
