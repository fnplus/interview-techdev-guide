#include <bits/stdc++.h>
using namespace std;

void max_heapify(vector<int> &input_array, int s, int e)
{
    int l = (s << 1) + 1, r = (s << 1) + 2;

    int largest = s;
    if (l <= e && input_array[l] > input_array[s])
        largest = l;
    if (r <= e && input_array[r] > input_array[largest])
        largest = r;

    if (largest != s)
    {
        swap(input_array[s], input_array[largest]);
        max_heapify(input_array, largest, e);
    }
}

void build_max_heap(vector<int> &input_array, int n)
{
    for (int i = n / 2; i >= 0; i--)
        max_heapify(input_array, i, n - 1);
}

void heap_sort(vector<int> &input_array, int n)
{
    build_max_heap(input_array, n);

    for (int i = n - 1; i > 0; i--)
    {
        swap(input_array[0], input_array[i]);
        max_heapify(input_array, 0, i - 1);
    }
}

int main()
{
    int n;
    cout << "Enter number of elements in an array ";
    cin >> n;
    vector<int> input_array;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        input_array.push_back(x);
    }

    heap_sort(input_array, n);

    cout << "\nSorted array is ";
    for (auto i : input_array)
        cout << i << " ";
    cout << endl;

    return 0;
}
