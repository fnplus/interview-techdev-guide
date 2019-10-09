// Java Program for union-find algorithm to detect cycle in a graph 
import java.util.*; 
import java.lang.*; 
import java.io.*; 

class Graph 
{ 
	int V, E;
	Edge edge[];

  // class for edge
	class Edge 
	{ 
		int src, dest; 
	}; 

	// Creates a graph with V vertices and E edges 
	Graph(int v,int e) 
	{ 
		V = v; 
		E = e; 
		edge = new Edge[E]; 
		for (int i=0; i<e; ++i) 
			edge[i] = new Edge(); 
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
		parent[xset] = yset; 
	} 

	// cycle detection function
	int isCycle( Graph graph) 
	{ 
		int parent[] = new int[graph.V]; 

		// Initialize all subsets as single element sets 
		for (int i=0; i<graph.V; ++i) 
			parent[i]=-1; 

		for (int i = 0; i < graph.E; ++i) 
		{ 
			int x = graph.find(parent, graph.edge[i].src); 
			int y = graph.find(parent, graph.edge[i].dest); 

			if (x == y) 
				return 1; 

			graph.Union(parent, x, y); 
		} 
		return 0; 
	} 

	// main
	public static void main (String[] args) 
	{ 
    Scanner in = new Scanner(System.in); 

    int V, E ; 
    System.out.print("Enter no of Vertices: ");
    V = in.nextInt();
    System.out.print("Enter no of Edges: ");
    E = in.nextInt();
    Graph graph = new Graph(V, E); 
    
    System.out.print("Enter Edges");
    for(int i=0;i<E;i++){
      int u,v;
      u = in.nextInt();
      v = in.nextInt();
      graph.edge[i].src = u;
      graph.edge[i].dest = v;
    }

		if (graph.isCycle(graph)==1) 
			System.out.println( "graph contains cycle" ); 
		else
			System.out.println( "graph doesn't contain cycle" ); 
	} 
} 
