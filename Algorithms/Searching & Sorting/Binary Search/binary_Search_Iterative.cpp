#include<iostream>
using namespace std;

// Binary Search algorithms - Iterative
int binary_search_iterative(int *array, int l, int r, int key){
    while(l<=r){
        int mid = l + (r - l)/2;    // ALT:- int mid = ((unsigned int)l + (unsigned int)r) >> 1; (don't fail in overflow like (l+r)/2 )
        if(key == array[mid])
            return mid;
        else if(key < array[mid])
            r = mid - 1;
        else 
            l = mid + 1; 
    }
    return -1;
}

int main(int argc, char const *argv[]){
	int N, target;
	cout << "Enter the size of array:";
	cin >> N;
	cout << "Enter the taget element to be search:";
	cin >> target;
	int A[N];
	cout << "Enter the array elements:";
	for(int i = 0; i < N; i++) cin >> A[i];
	int pos = binary_search_iterative(A, 0, N-1, target);
	cout << "index of target " << target << " is: " << pos << endl;
	return 0;
}
