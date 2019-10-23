// A union-find algorithm to detect cycle in a graph 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

// struct for edge
struct Edge { 
	int src, dest; 
}; 

// struct for graph 
struct Graph { 
	int V, E; 
	struct Edge* edge; 
}; 

// Creates a graph with V vertices and E edges 
struct Graph* createGraph(int V, int E) { 
	struct Graph* graph = 
		(struct Graph*) malloc( sizeof(struct Graph) ); 
	graph->V = V; 
	graph->E = E; 

	graph->edge = 
		(struct Edge*) malloc( graph->E * sizeof( struct Edge ) ); 

	return graph; 
} 

// find subset of element i
int find(int parent[], int i) { 
	if (parent[i] == -1) 
		return i; 
	return find(parent, parent[i]); 
} 

// union of 2 subset
void Union(int parent[], int x, int y) { 
	int xset = find(parent, x); 
	int yset = find(parent, y); 
	if(xset!=yset){ 
	parent[xset] = yset; 
	} 
} 

// cycle detection function
int isCycle( struct Graph* graph ) { 
	int *parent = (int*) malloc( graph->V * sizeof(int) ); 

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

// main function
int main() { 
	
	int V, E;
	printf("Enter no of Vertices: ");
  scanf("%d",&V);
	printf("Enter no of Edges: ");
  scanf("%d",&E);
	struct Graph* graph = createGraph(V, E); 

  printf("Enter edges\n");
  for(int i=0;i<E;i++){
    int u,v;
    scanf("%d%d",&u,&v);
    graph->edge[i].src = u;
    graph->edge[i].dest = v;
  }

	if (isCycle(graph)) 
		printf( "graph contains cycle" ); 
	else
		printf( "graph doesn't contain cycle" ); 

	return 0; 
} 
