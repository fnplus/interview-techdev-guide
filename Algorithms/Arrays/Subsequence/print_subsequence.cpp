//   Power Function For Large Numbers using Modulo

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mode 1000000007

int n; //Size of array

//Recursive Function to Generate All Subsequence of integer Array
//curr points to current index of original Array A
//idx points to current index of temporary Array temp

void fun(int curr , int idx , int A[] , int temp[])
{
	if(curr == n)    //If curr has reached to n the print temp array
	{
		for(int i = 0; i < idx; i++)
			cout<<temp[i];
		cout<<endl;
		return;
	}
    fun(curr+1, idx , A, temp); //Calling function without taking current element
    temp[idx] = A[curr];
    fun(curr+1, idx+1, A ,temp);  //Calling function after taking current element
}

int main() 
{ 
   cout<<"Enter number of Array Elements"<<endl;
   cin>>n;
   int A[n];
   cout<<"Enter Array Elements"<<endl;
   for(int i = 0; i < n; i++)
   { 
   		cin>>A[i];
   }
   int temp[10000] = {0}; //temporary array to hold subsequence
   cout<<"Following subsequences of given array are generated";
   fun(0,0,A,temp);  //Function to generate subsequenceS
}



