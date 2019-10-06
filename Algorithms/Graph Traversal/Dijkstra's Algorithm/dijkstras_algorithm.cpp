#include<bits/stdc++.h>
#define infinity 0x3f3f3f3f
using namespace std;

class Graph
{
	public:
	vector<vector<pair<int,int> > > adj;
	Graph(int n)
	{
		adj.resize(n+1);
	}
	int size();
	void add_edge(int u, int v, int w);
};

int Graph::size()
{
	return adj.size() - 1;
}

void Graph::add_edge(int u, int v, int w)
{
	adj[u].push_back(make_pair(v, w)); 
	adj[v].push_back(make_pair(u, w)); // Undirected Graph
}

vector<int> dijkstra(Graph graph, int s)
{
	int n = graph.size();
	vector<int> dist(n+1, infinity);
	
	dist[s] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
	pq.push(make_pair(dist[s], s));
	
	while(!pq.empty())
	{
	    int u = pq.top().second;
	    pq.pop();
	    for(auto it : graph.adj[u])
	    {
	        int v, w;
	        v = it.first;
	        w = it.second;
	        if(dist[v] > dist[u] + w)
        	{
        		dist[v] = dist[u] + w;
        		pq.push(make_pair(dist[v], v));
        	}
	    }
	}

	return dist;
}

int main()
{
	int n,m;
	cout << "Enter number of nodes in the graph ";
	cin >> n;
	Graph graph(n);
	cout << "Enter number of edges in the graph ";
	cin >> m;
	for(int i = 0; i < m; i++)
	{
		int u, v, w;
		cout << "Enter edge and weight of edge(u, v and w)";
		cin >> u >> v >> w;
		graph.add_edge(u, v, w);
	}
	int s;
	cout << "Enter source vertex ";
	cin >> s;
	vector<int> distance = dijkstra(graph, s);
	if(distance.size() > 0)
	{
		cout << "Shortest distance from vertex " << s << ":\n";
		for(int i = 1; i <= n; i++)
		{
			cout<< i << " : " << distance[i] << "\n";
		}
	}
	return 0;
}
