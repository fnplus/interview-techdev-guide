#include<bits/stdc++.h>
#define infinity 0x3f3f3f3f
using namespace std;

class Graph
{
	public:
	vector<vector<pair<int,int> > > adj;
	vector<pair<pair<int,int>, int> > edges;
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
	edges.push_back(make_pair(make_pair(u, v), w));
	adj[u].push_back(make_pair(v, w)); // Directed Graph
}

void relax(vector<int> &dist, pair<pair<int,int>, int> edge)
{
	int u, v, w;
	u = edge.first.first;
	v = edge.first.second;
	w = edge.second;
	if(dist[v] > dist[u] + w)
	{
		dist[v] = dist[u] + w;
	}
}

vector<int> bellman_ford(Graph graph, int s)
{
	int n = graph.size();
	vector<int> dist(n+1, infinity);
	dist[s] = 0;
	for(int i = 1; i <= n - 1; i++)
	{
		for(auto it : graph.edges)
		{
			relax(dist, it);
		}
	}

	// Checking whether the graph contains negative weight cycle
	for(auto it : graph.edges)
	{
		int u, v, w;
		u = it.first.first;
		v = it.first.second;
		w = it.second;
		if(dist[v] > dist[u] + w)
		{
			cout << "Graph contains cycle\n";
			dist.resize(0);
			return dist;
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
	vector<int> distance = bellman_ford(graph, s);
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
