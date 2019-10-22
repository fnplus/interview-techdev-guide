// A union-find algorithm to detect cycle in a graph 
#include <bits/stdc++.h> 
using namespace std; 

// class for edge
class Edge 
{ 
	public: 
	int src, dest; 
}; 

// class for graph 
class Graph 
{ 
	public:
	int V, E; 
	Edge* edge; 
}; 

// Creates a graph with V vertices and E edges 
Graph* createGraph(int V, int E) 
{ 
	Graph* graph = new Graph(); 
	graph->V = V; 
	graph->E = E; 

	graph->edge = new Edge[graph->E * sizeof(Edge)]; 

	return graph; 
} 

// find subset of an element i 
int find(int parent[], int i) 
{ 
	if (parent[i] == -1) 
		return i; 
	return find(parent, parent[i]); 
} 

// union of two subsets 
void Union(int parent[], int x, int y) 
{ 
	int xset = find(parent, x); 
	int yset = find(parent, y); 
	if(xset != yset) 
	{ 
		parent[xset] = yset; 
	} 
} 

// cycle detection function
int isCycle( Graph* graph ) 
{ 
	int *parent = new int[graph->V * sizeof(int)]; 

	// Initialize all subsets as single element sets 
	memset(parent, -1, sizeof(int) * graph->V); 

	for(int i = 0; i < graph->E; ++i) 
	{ 
		int x = find(parent, graph->edge[i].src); 
		int y = find(parent, graph->edge[i].dest); 

		if (x == y) 
			return 1; 

		Union(parent, x, y); 
	} 
	return 0; 
} 

// main
int main() 
{ 
	int V, E; 
  cout<<"Enter no of Vertices: ";
  cin>>V;
  cout<<"Enter no of Edges: ";
  cin>>E;
	Graph* graph = createGraph(V, E); 

  printf("Enter edges\n");
  for(int i=0;i<E;i++){
    int u,v;
    scanf("%d%d",&u,&v);
    graph->edge[i].src = u;
    graph->edge[i].dest = v;
  }

	if (isCycle(graph)) 
		cout<<"graph contains cycle"; 
	else
		cout<<"graph doesn't contain cycle"; 

	return 0; 
} 