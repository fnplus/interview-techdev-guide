#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], vector<int>& vis, int u){
    vis[u] = 1;
    cout << u << " ";

    // For every neighbour v of vertex u check if it's visited or not
    for(int v : adj[u]){
        if(!vis[v])
            dfs(adj, vis, v);
    }
}

int main(){
    int vertices, edges;
    cout << "Enter the number of Vertices and Edges: ";
    cin >> vertices >> edges;

    vector<int> adj[vertices+1]; // Adjacency List
    vector<int> vis(vertices+1); // Visited vector/array to mark/unmark a vertex visited

    // Input all the edges for an undirected Graph
    for(int i = 0; i < edges; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    cout << "The depth first ordering of the Graph is: \n";
    for(int i = 0; i < vertices; i++){
        // For every unvisited vertex call the dfs function
        if(!vis[i])
            dfs(adj, vis, i);
    }
    return 0;
}