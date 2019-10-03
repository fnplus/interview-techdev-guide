/* Java implementation of BFS algorithm to traverse a graph.
 *
 * Starting from the root node, this algorithm explores all the neighboring nodes
 * and keeps track of visited nodes to make sure no node is visited more than once. */

import java.util.Iterator;
import java.util.LinkedList;

public class BreadthFirstSearch {

    /* Number of vertices */
    private int V;
    /*Adjacency Lists */
    private LinkedList<Integer> adj[];

    BreadthFirstSearch(int v)
    {
        V = v;
        adj = new LinkedList[v];
        for (int i = 0; i < v; ++i)
            adj[i] = new LinkedList();
    }

    /* Add an edge to the graph. Node w is adjacent to given Node v */
    void addEdge(int v,int w)
    {
        adj[v].add(w);
    }

    /* BFS algorithm which starts from a given node, s */
    void BFS(int s)
    {
        /* List of visited vertices; all false in the beginning) */
        boolean visited[] = new boolean[V];

        /* Queue data structure is used for BFS */
        LinkedList<Integer> queue = new LinkedList<>();

        /* Mark starting node s as visited and enqueue it */
        visited[s]=true;
        queue.add(s);

        /* Until queue is empty, dequeue a single node in queue and look for it's neighboring vertices.
         *  If an adjecent node hasn't been visited yet, set it as visited and enqueue this node. s*/
        while (queue.size() != 0)
        {
            /* Dequeue */
            s = queue.poll();
            System.out.print( s + " ");

            /* Get all adjacent vertices */
            Iterator<Integer> i = adj[s].listIterator();
            while (i.hasNext())
            {
                int n = i.next();
                if (!visited[n])
                {
                    visited[n] = true;
                    queue.add(n);
                }
            }
        }
    }

    public static void main(String[] args) {

        /* Create Graph with 4 vertices */
        BreadthFirstSearch g = new BreadthFirstSearch(4);

        /* Add edges in graph */
        g.addEdge(0, 0);
        g.addEdge(0,1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 0);
        g.addEdge(2, 3);

        System.out.println("Traverse graph with BFS...");
        System.out.println("Starting Vertex: 2");

        g.BFS(2);
    }
}
