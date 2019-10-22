#include <iostream>

using namespace std;

int main()
{
    int n, arr[100];
    cout << "Enter no of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements now: "; 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before the sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    //Bubble sort algo
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                //Swapping the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nAfter the sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
