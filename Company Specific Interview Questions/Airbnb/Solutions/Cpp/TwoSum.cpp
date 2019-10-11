/*
Contributed by Bipul Kumar 
https://github.com/imbipulkumar/
*/

#include <bits/stdc++.h>
using namespace std;

// TwoSum() returns array of size 2 containing required indices of the two numbers.
int* TwoSum(int* a,int n,int x)
{
    unordered_map<int,int> complement;
    /*
	Iterate and insert elements into the hash table, we also look back to check if current element's complement already exists in the table. 
	If it exists, we have found a solution and return immediately.
	*/
    for(int i=0;i<n;i++)
    {
        auto itr=complement.find(x-a[i]);
        if(itr!=complement.end())
        {
            return new int[2] {itr->second,i};
        }
        else
        {
            complement.insert({a[i],i});
        }
    }
    throw "No such two numbers";
}

// Driver program to test above function.
int main() {
    int n,x;
    // n=size of array a and x=target sum.
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int *index=TwoSum(a,n,x);
    cout<<index[0]<<" "<<index[1]<<endl;
    return 0;
}

/*
Complexity Analysis:
Time complexity : O(n). We traverse the list containing nn elements only once. Each look up in the table costs only O(1) time.
Space complexity : O(n). The extra space required depends on the number of items stored in the hash table, which stores at most nn elements.
*/ 
