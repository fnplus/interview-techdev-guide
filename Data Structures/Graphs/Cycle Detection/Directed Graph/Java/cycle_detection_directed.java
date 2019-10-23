// A Java Program to detect cycle in a graph 
import java.util.ArrayList; 
import java.util.LinkedList; 
import java.util.List; 
import java.util.Scanner;

class Graph { 
	
	private final int V; 
	private final List<List<Integer>> adj; 

	public Graph(int V) 
	{ 
		this.V = V; 
		adj = new ArrayList<>(V); 
		
		for (int i = 0; i < V; i++) 
			adj.add(new LinkedList<>()); 
	} 
	
	private boolean isCyclicUtil(int i, boolean[] visited, boolean[] recStack) 
	{ 
		if (recStack[i]) 
			return true; 

		if (visited[i]) 
			return false; 
			
		visited[i] = true; 

		recStack[i] = true; 
		List<Integer> children = adj.get(i); 
		
		for (Integer c: children) 
			if (isCyclicUtil(c, visited, recStack)) 
				return true; 
				
		recStack[i] = false; 

		return false; 
	} 

	private void addEdge(int source, int dest) { 
		adj.get(source).add(dest); 
	} 

	private boolean isCyclic() 
	{ 
		
		boolean[] visited = new boolean[V]; 
		boolean[] recStack = new boolean[V]; 
		
		for (int i = 0; i < V; i++) 
			if (isCyclicUtil(i, visited, recStack)) 
				return true; 

		return false; 
	} 

	// main Driver
	public static void main(String[] args) 
	{ 
		Scanner in = new Scanner(System.in); 
		System.out.print("Enter no of Vertices: ");
		int V = in.nextInt();
		Graph graph = new Graph(V);
		
		System.out.print("Enter no of Edges: ");
		int E = in.nextInt();

		System.out.println("Enter Edges");
		for(int i=0;i<E;i++){
			int u,v;
			u = in.nextInt();
			v = in.nextInt();
			graph.addEdge(u, v);
		}

		if(graph.isCyclic()) 
			System.out.println("Graph contains cycle"); 
		else
			System.out.println("Graph doesn't contain cycle"); 
	} 
} 
