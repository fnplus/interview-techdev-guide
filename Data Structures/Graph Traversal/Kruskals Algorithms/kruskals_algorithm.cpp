#include <bits/stdc++.h>
using namespace std;

class disjoint_set
{
    public:
    vector<int> ds;
    disjoint_set(int n)
    {
        ds.resize(n + 1);
        for(int i = 1; i <= n; i++)
        {
            make_set(i);
        }
    }
    void make_set(int node);
    int find_set(int node);
    void union_sets(int node_a, int node_b);
    void print_disjoint_sets();
};

void disjoint_set::make_set(int node)
{
    ds[node] = node;
}

int disjoint_set::find_set(int node)
{
    if(ds[node] == node)
        return node;
    else
        return ds[node] = find_set(ds[node]);
}

void disjoint_set::union_sets(int node_a, int node_b)
{
    ds[node_a] = node_b;
}

void disjoint_set::print_disjoint_sets()
{
    map<int, vector<int>> disjoint_sets;
    for(int i = 1; i <= ds.size(); i++)
    {
        disjoint_sets[find_set(ds[i])].push_back(i);
    }
    cout << "Disjoint sets are following:\n";
    int set_number = 1;
    for(auto it : disjoint_sets)
    {
        cout << "Set " << set_number++ << ": ";
        for(auto jt : it.second)
        {
            cout << jt << " ";
        }
        cout << "\n";
    }
}

void kruskal(int n, vector<pair<int, pair<int, int> > > edges, int m)
{
    disjoint_set dsu(n);
    vector<pair<int, int> > selected_edges;
    int cost = 0;
    sort(edges.begin(), edges.end());
    for(auto edge : edges)
    {
        int u, v, w;
        w = edge.first;
        u = edge.second.first;
        v = edge.second.second;
        
        int parent_u = dsu.find_set(u);
        int parent_v = dsu.find_set(v);
        if(parent_u != parent_v)
        {
            selected_edges.push_back(make_pair(u, v));
            cost += w;
            dsu.union_sets(parent_u, parent_v);
        }
    }
    cout << "Cost of constructing MST: " << cost << "\n";
    cout << "Following are the edges in the constructed MST:\n";
    for(auto edge : selected_edges)
    {
        cout << edge.first << " - " << edge.second << "\n";
    }
}

int main()
{
    int n, m;
    cout << "Enter the number of elements ";
    cin >> n;
    cout << "Enter the number of edges ";
    cin >> m;
    
    vector<pair<int, pair<int, int> > > edges, selected_edges;
    for(int i = 0; i < m; i++)
    {
        int u, v, w;
        cout << "Enter edge(u and v) and weight ";
        cin >> u >> v >> w;
        edges.push_back(make_pair(w, make_pair(u, v)));
    }
    
    kruskal(n, edges, m);
    
    return 0;
}
