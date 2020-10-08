// Source - https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/
// C# program to print BFS traversal 
// from a given source vertex. 
// BFS(int s) traverses vertices 
// reachable from s. 
using System; 
using System.Collections.Generic; 
using System.Linq; 
using System.Text; 

// This class represents a directed 
// graph using adjacency list 
// representation 
class Graph{ 
	
// No. of vertices	 
private int _V; 

//Adjacency Lists 
LinkedList<int>[] _adj; 

public Graph(int V) 
{ 
	_adj = new LinkedList<int>[V]; 
	for(int i = 0; i < _adj.Length; i++) 
	{ 
		_adj[i] = new LinkedList<int>(); 
	} 
	_V = V; 
} 

// Function to add an edge into the graph 
public void AddEdge(int v, int w) 
{		 
	_adj[v].AddLast(w); 

} 

// Prints BFS traversal from a given source s 
public void BFS(int s) 
{ 
	
	// Mark all the vertices as not 
	// visited(By default set as false) 
	bool[] visited = new bool[_V]; 
	for(int i = 0; i < _V; i++) 
		visited[i] = false; 
	
	// Create a queue for BFS 
	LinkedList<int> queue = new LinkedList<int>(); 
	
	// Mark the current node as 
	// visited and enqueue it 
	visited[s] = true; 
	queue.AddLast(s);		 

	while(queue.Any()) 
	{ 
		
		// Dequeue a vertex from queue 
		// and print it 
		s = queue.First(); 
		Console.Write(s + " " ); 
		queue.RemoveFirst(); 
		
		// Get all adjacent vertices of the 
		// dequeued vertex s. If a adjacent 
		// has not been visited, then mark it 
		// visited and enqueue it 
		LinkedList<int> list = _adj[s]; 

		foreach (var val in list)			 
		{ 
			if (!visited[val]) 
			{ 
				visited[val] = true; 
				queue.AddLast(val); 
			} 
		} 
	} 
} 

// Driver code 
static void Main(string[] args) 
{ 
	Graph g = new Graph(4); 
	
	g.AddEdge(0, 1); 
	g.AddEdge(0, 2); 
	g.AddEdge(1, 2); 
	g.AddEdge(2, 0); 
	g.AddEdge(2, 3); 
	g.AddEdge(3, 3); 
	
	Console.Write("Following is Breadth First " + 
				"Traversal(starting from " + 
				"vertex 2)\n"); 
	g.BFS(2); 
} 
} 
