import java.util.*;

class GFG
{

    private static int V = 5;
    private static int[] parent = new int[V];
    private static int INF = Integer.MAX_VALUE;

    // Find set of vertex i
    private static int find(int i)
    {
        while (parent[i] != i)
            i = parent[i];
        return i;
    }

    private static void union1(int i, int j)
    {
        int a = find(i);
        int b = find(j);
        parent[a] = b;
    }

    // Finds MST using Kruskal's algorithm
    private static void kruskalMST(int[][] cost)
    {
        int mincost = 0; // Cost of min MST.

        // Initialize sets of disjoint sets.
        for (int i = 0; i < V; i++)
            parent[i] = i;

        // Include minimum weight edges one by one
        int edge_count = 0;
        while (edge_count < V - 1)
        {
            int min = INF, a = -1, b = -1;
            for (int i = 0; i < V; i++)
            {
                for (int j = 0; j < V; j++)
                {
                    if (find(i) != find(j) && cost[i][j] < min)
                    {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                }
            }

            union1(a, b);
            System.out.printf("Edge %d:(%d, %d) cost:%d \n",
                    edge_count++, a, b, min);
            mincost += min;
        }
        System.out.printf("\n Minimum cost= %d \n", mincost);
    }

    public static void main(String[] args)
    {
        int[][] cost = {
                {INF, 2, INF, 6, INF},
                {2, INF, 3, 8, 5},
                {INF, 3, INF, INF, 7},
                {6, 8, INF, INF, 9},
                {INF, 5, 7, 9, INF},
        };

        kruskalMST(cost);
    }
}