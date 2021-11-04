#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int size = ((2*n)+2);
		int arr[100000];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+size);
		int i=0;
		for(i;i<size-1;i++)
		{
			//cout<<arr[i]<<" ";
			if(arr[i]!=arr[i+1])
			{
				cout<<arr[i]<<" ";
			}
			else
			{
				i++;
			}
		}
		if(i==size-1)
		{
			cout<<arr[i];
		}
		cout<<"\n";
	}
return 0;
}