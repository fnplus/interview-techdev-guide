#include<iostream>
using namespace std;

// Partition
int partition(int *array, int l, int r){
    int pivot = array[r];
    int i = l-1; // place for swapping
    for(int j = l; j <= r-1; j++){
        if(array[j] <= pivot){
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i+1], array[r]);
    return (i+1);
}

// Random pivot
int partition_random_pivot(int *array, int l, int r){
    srand(time(NULL));
    int random = l + rand()%(r - l);
    swap(array[random], array[r]);
    return partition(array, l, r);
}

int quick_sort(int *array, int l, int r){
    if(l < r){   // base case
        int pi = partition_random_pivot(array, l, r);  // returns index of pivot
        quick_sort(array, l, pi-1);
        quick_sort(array, pi+1, r);
    }
}

int main(int argc, char const *argv[]){
	int N;
	cout << "Enter the size of array:";
	cin >> N;
	int A[N];
	cout << "Enter the array elements:";
	for(int i = 0; i < N; i++) cin >> A[i];
	
	quick_sort(A, 0, N-1);
	cout << "Sorted array is: ";
	for(int i = 0; i < N; i++) cout << A[i] << " ";
	cout << endl;

	return 0;
}
