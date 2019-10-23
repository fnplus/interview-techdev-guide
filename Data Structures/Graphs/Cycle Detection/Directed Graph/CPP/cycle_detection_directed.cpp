// A C++ Program to detect cycle in a graph 
#include<iostream> 
#include <list> 
#include <limits.h> 

using namespace std; 

class Graph 
{ 
	int V;
	list<int> *adj; 
	bool isCyclicUtil(int v, bool visited[], bool *rs);
  
  public: 
	Graph(int V);
	void addEdge(int v, int w);
	bool isCyclic();
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
	adj[v].push_back(w);
} 

// util function for detect cycle
bool Graph::isCyclicUtil(int v, bool visited[], bool *recStack) 
{ 
	if(visited[v] == false) 
	{ 
		visited[v] = true; 
		recStack[v] = true; 

		list<int>::iterator i; 
		for(i = adj[v].begin(); i != adj[v].end(); ++i) 
		{ 
			if ( !visited[*i] && isCyclicUtil(*i, visited, recStack) ) 
				return true; 
			else if (recStack[*i]) 
				return true; 
		} 

	} 
	recStack[v] = false;
	return false; 
} 

// detect cycle function
bool Graph::isCyclic() 
{ 
	// Mark all the vertices as not visited and not part of recursion stack 
	bool *visited = new bool[V]; 
	bool *recStack = new bool[V]; 
	for(int i = 0; i < V; i++) 
	{ 
		visited[i] = false; 
		recStack[i] = false; 
	} 

	// Call the recursive helper function to detect cycle in different DFS trees 
	for(int i = 0; i < V; i++) 
		if (isCyclicUtil(i, visited, recStack)) 
			return true; 

	return false; 
} 

int main() 
{ 
	// Create a graph given in the above diagram 
  cout<<"Enter no Vertices: ";
  int V; cin>>V;
	Graph g(V);
  cout<<"Enter no of Edges: ";
  int E; cin>>E;

  cout<<"Enter Edges\n";
  for(int i=0;i<E;i++){
    int u,v; cin>>u>>v;
    g.addEdge(u, v);
  } 

	if(g.isCyclic()) 
		cout << "Graph contains cycle"; 
	else
		cout << "Graph doesn't contain cycle"; 
	return 0; 
} 
