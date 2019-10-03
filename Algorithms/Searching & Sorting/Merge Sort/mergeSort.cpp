#include<bits/stdc++.h>
using namespace std;
//merges two sorted arrays
void merge(int a[],int l,int m,int r){
	int n1 = m-l+1;
	int n2 = r-m;
	int L[n1],R[n2];

	for(int i=0;i<n1;i++){
		L[i] = a[l+i];
	}
	for(int i=0;i<n2;i++){
		R[i] = a[m+i+1];
	}
	int i=0,j=0,k=l;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			a[k++]=L[i++];
		}
		else{
			a[k++]=R[j++];
		}
	}
	while(i<n1){
		a[k++]=L[i++];
	}
	while(j<n2){
		a[k++]=R[j++];
	}
}
//recursively performs merge sort
void merge_sort(int a[],int l,int r){
	if(l < r){
		int m = l+(r-l)/2;
		merge_sort(a,l,m);
		merge_sort(a,m+1,r);
		merge(a,l,m,r);
	}
}
//wrapper for merge_sort
void mergeSort(int ar_size,int a[]){
	merge_sort(a,0,ar_size-1);
}

int main() {
	int ar_size = 7, i;
	int a[7] = {2, 3, 0, 4, 7, 1, 8};
	mergeSort(ar_size, a);

	for(i=0; i<ar_size; i++){
		cout<<a[i]<<" \n"[i==ar_size-1];
	}
	return 0;
}
