#include <iostream>
using namespace std;
void count_sort(int a[],int n,int pos)
{
	int b[n],count[10]={0};
	for(int i=0;i<n;i++)
	{
		count[(a[i]/pos)%10]++;
	}
	for(int i=1;i<10;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(int i=n-1;i>=0;i--)    //essential to maintain stability
	{
		b[--count[(a[i]/pos)%10]]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		a[i]=b[i];
	}
}
void radix_sort(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(int i=1;(max/i)>0;i*=10)
	{
		count_sort(a,n,i);
	}
}

int main()
{
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		 cin>>a[i];
	}
	radix_sort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" "; 
	}
	return 0;
}