#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

vector<int> merge_sort(vector<queue<int> > lists, int k)
{
    vector<int> merged_list;
    priority_queue<pii, vector<pii>, greater<pii> > pq;
    for(int i = 0; i < k; i++)
    {
        pq.push(make_pair(lists[i].front(), i));
        lists[i].pop();
    }
    while(!pq.empty())
    {
        int element = pq.top().first;
        int index = pq.top().second;
        pq.pop();
        
        merged_list.push_back(element);
        
        if(!lists[index].empty())
        {
            pq.push(make_pair(lists[index].front(), index));
            lists[index].pop();
        }
    }
    return merged_list;
}

int main()
{
    int k, i, j;
    cout << "Enter the number of lists ";
    cin >> k;
    vector<queue<int> > lists(k);
    for(i = 0; i < k; i++)
    {
        int m;
        cout << "Enter the size of " << i + 1 << " list ";
        cin >> m;
        cout << "Enter the elements of " << i + 1 << " sorted list ";
        for(j = 0; j < m; j++)
        {
            int element;
            cin >> element;
            lists[i].push(element);
        }
    }
    vector<int> merged_list = merge_sort(lists, k);
    cout << "Merged list: ";
    for(auto it : merged_list)
        cout << it << " ";
    return 0;
}
