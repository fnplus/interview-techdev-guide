#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
using namespace std;
int main(int argc, char **argv)
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	long long int buy1=INT_MAX;
    long long int buy2=INT_MAX;
    long long int sell1=0;
    long long int sell2=0;
    for(int i=0;i<n;i++)
    {
        buy1=min(buy1,arr[i]);
        sell1=max(sell1,arr[i]-buy1);
        buy2=min(buy2,arr[i]-sell1);
        sell2=max(sell2,arr[i]-buy2);
    }
    cout<<sell2<<endl;
	return 0;
}
