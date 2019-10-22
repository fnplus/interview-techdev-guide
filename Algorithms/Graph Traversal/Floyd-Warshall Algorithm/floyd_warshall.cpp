#include <bits/stdc++.h>
#define infinity 0x3f3f3f3f
using namespace std;

void floyd_warshall(vector<vector<int> > adj, int n)
{
    vector<vector<int> > dist(n + 1, vector<int>(n + 1));
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            dist[i][j] = ((adj[i][j] == -1) ? infinity : adj[i][j]);
        }
    }
    
    for(int k = 1; k <= n; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    
    cout << "Following distance matrix gives the shortest path between adjacent nodes "
            "of the given graph(-1 if not connected)\n";
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << ((dist[i][j] >= infinity) ? -1 : dist[i][j]) << " ";
        }
        cout << "\n";
    }
    
}

int main()
{
    int n, i, j;
    cout << "Enter the number of nodes in the graph ";
    cin >> n;
    vector<vector<int> > adj(n + 1, vector<int>(n + 1));
    
    cout << "Enter the adjacency matrix of graph(adj[i][j] = weight of edge and -1 if disconnected)\n";
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            cin>>adj[i][j];
        }
    }
    floyd_warshall(adj, n);
    return 0;
}
