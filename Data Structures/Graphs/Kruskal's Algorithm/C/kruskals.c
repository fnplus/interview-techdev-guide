#include <stdio.h>

struct Edge {
    int start,end,weight;
};

struct Graph {
    struct Edge edges[20];
    int edgeCount;
};

int graph[20][20];
int v;
struct Graph g;
struct Graph spanningGraph;

void sort() {
    struct Edge temp;
    for(int i = 0; i < g.edgeCount - 1; i++) {
        for(int j = 0; j < g.edgeCount - i - 1; j++) {
            if(g.edges[j].weight > g.edges[j+1].weight) {
                temp = g.edges[j];
                g.edges[j] = g.edges[j+1];
                g.edges[j+1] = temp;
            }
        }
    }
}

int find(int parent[],int vertex) {
    if(parent[vertex] == -1)
        return vertex;
    return find(parent,parent[vertex]);
}

void unionn(int parent[],int s1, int s2) {
    parent[s1] = s2;
}

void kruskals() {
    int parent[20],s1,s2;
    g.edgeCount = 0;
    spanningGraph.edgeCount = 0;
    for(int i = 1; i < v; i++) {
        for(int j = 0; j < v; j++) {
            if(graph[i][j] != 0) {
                g.edges[g.edgeCount].start = i;
                g.edges[g.edgeCount].end = j;
                g.edges[g.edgeCount].weight = graph[i][j];
                g.edgeCount++;
            }
        }
    }
    sort();
    
    for(int i = 0; i < v; i++) {
        parent[i] = -1;
    }

    for(int i = 0; i < g.edgeCount; i++) {
        s1 = find(parent,g.edges[i].start);
        s2 = find(parent,g.edges[i].end);

        if(s1 != s2) {
            spanningGraph.edges[spanningGraph.edgeCount] = g.edges[i];
            spanningGraph.edgeCount++;
            unionn(parent,s1,s2);
        }
    };
}

int main(void) {
  printf("Enter number of vertices: ");
  scanf("%d",&v);

  printf("Enter the matrix\n");
  for(int i = 0; i < v; i++) {
      for(int j = 0; j < v; j++) {
          scanf("%d",&graph[i][j]);
      }
  }
  printf("Calling kruskals\n");
  kruskals();
  int cost = 0;
  for(int i = 0; i < spanningGraph.edgeCount; i++) {
      printf("\n%d -> %d\t%d\n",spanningGraph.edges[i].start + 1,spanningGraph.edges[i].end + 1,spanningGraph.edges[i].weight);
      cost += spanningGraph.edges[i].weight;
  }
  printf("Total cost is: %d\n", cost);
  return 0;
}