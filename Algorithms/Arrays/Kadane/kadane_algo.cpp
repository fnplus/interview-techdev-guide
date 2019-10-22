#include<iostream>
using namespace std;

void kadane_algo(int arr[], int n) {

    int csum = arr[0];
    int osum = arr[0];

    for (int i = 1; i < n; i++) {
        if (csum < 0) {
            csum = arr[i];
        } else {
            csum += arr[i];
        }

        if (csum > osum) {
            osum = csum;
        }
    }

    cout << "Max sum is " << osum << endl;
}

int main() {

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "\nEnter the elements of the array" << endl;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    kadane_algo(arr, n);
    return 0;
}
