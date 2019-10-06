#include <bits/stdc++.h>
using namespace std;

class Heap
{
    vector<int> heap_array;
    string heap_type;

public:
    Heap(string type)
    {
        heap_type = type;
    }

    inline int left(int i) { return ((i << 1) + 1); }
    inline int right(int i) { return ((i << 1) + 2); }
    inline int parent(int i) { return (i / 2); }
    inline bool is_empty() { return (heap_array.size() == 0) ? true : false; }
    inline int get_size() { return heap_array.size(); }

    void find_max()
    {
        if (heap_type == "max")
            cout << "\nMax element is " << heap_array[0];
        else
            cout << "\nYou can't find max in min heap";
    }

    void find_min()
    {
        if (heap_type == "min")
            cout << "\nMin element is " << heap_array[0];
        else
            cout << "\nYou can't find min in max heap";
    }

    void insert(int x)
    {
        heap_array.push_back(x);
        int curr = heap_array.size() - 1;
        while (curr != 0)
        {
            if (heap_type == "min")
            {
                if (heap_array[parent(curr)] > heap_array[curr])
                    swap(heap_array[parent(curr)], heap_array[curr]);
            }

            else if (heap_type == "max")
            {
                if (heap_array[parent(curr)] < heap_array[curr])
                    swap(heap_array[parent(curr)], heap_array[curr]);
            }

            else
            {
                cout << "\nPlease Check that you have entered max or min as heap type";
                exit(2);
            }

            curr = parent(curr);
        }
    }

    void extract()
    {

        if (is_empty())
            cout << "\nCannot extract from an empty heap";

        else if (get_size() == 1)
        {
            int result = heap_array[0];
            heap_array.erase(heap_array.begin());
            cout << "\n"
                 << result;
        }

        int l = get_size();
        cout << heap_array[0];
        swap(heap_array[0], heap_array[l - 1]);
        heap_array.erase(heap_array.end() - 1);
        heapify(0);
    }

    void heapify(int i) // index from which heapify should start in top-down approach
    {
        int l = left(i);
        int r = right(i);
        int index;
        if (heap_type == "min")
        {
            if (l < get_size() && heap_array[l] < heap_array[i])
                index = l;
            else
                index = i;
            if (r < get_size() && heap_array[r] < heap_array[index])
                index = r;
        }
        else
        {
            if (l < get_size() && heap_array[l] > heap_array[i])
                index = l;
            else
                index = i;
            if (r < get_size() && heap_array[r] > heap_array[index])
                index = r;
        }

        if (index != i)
        {
            swap(heap_array[i], heap_array[index]);
            heapify(index);
        }
    }

    void display()
    {
        cout << "\nHeap is ";
        for (auto i : heap_array)
            cout << i << " ";
        cout << endl;
    }
};

int main()
{
    Heap *h = new Heap("min");

    vector<int> input{3, 1, 6, 5, 2, 4};

    for (auto i : input)
        h->insert(i);
    h->display();

    h->find_min();

    cout << "\n\nOn running extract we get ";
    h->extract();
    h->display();

    return 0;
}
