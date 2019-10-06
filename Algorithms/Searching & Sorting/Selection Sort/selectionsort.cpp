#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)   // Function to swap two Variables
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void insertionSort(int arr[],int size)
{
	int min_index;
    for(int i=0;i<size-1;i++)
    {
        min_index=i;
        for(int j=i+1;j<size;j++)   //searching for minimum index
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);  //swapping element at min_index with ith index
	}
}
int main()
{
	int ar[] = {10,6,8,9,4,5,7};
	int n=7;
	insertionSort(ar,n);
    for(int i=0;i<n;i++)  	// printing the sorted array
    cout<<ar[i]<<endl;

}
