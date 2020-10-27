#include<stdio.h>

int LSearch(int a[],int size, int x)
{
	for(int i=0;i<size;i++)
	{
		if(a[i]==x)
		return i+1;
	}
	return -1;
}
int main()
{
	int n;
	printf("Size  : ");
	scanf("%d",&n);
	int a[n],k,i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Value to search : ");
	scanf("%d",&k);
	printf("\n");
	
	int res=LSearch(a,n,k);
	(res==-1)?printf("Value not found"):printf("Value found at position : %d",res);
	
	return 0;
}
