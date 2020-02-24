#include <stdlib.h>
 
typedef struct {
    unsigned int first;
    unsigned int second;
} edge;
 
void spanning_tree_recursive(const edge *edges, unsigned int size, 
        unsigned int order, unsigned int *visited, unsigned int *tree,
        unsigned int vertex, int edge, unsigned int *len)
{
    unsigned int e;
    visited[vertex] = 1;
    if (edge != -1) {
        tree[(*len)++] = edge;
    }
    for (e = 0; e < size; e++) {
        if (edges[e].first == vertex || edges[e].second == vertex) {
            unsigned int neighbour = edges[e].first == vertex ?
                edges[e].second : edges[e].first;
            if (!visited[neighbour]) {
                spanning_tree_recursive(edges, size, order, visited, tree, 
                        neighbour, e, len);
            }
        }
    }
}
 
unsigned int spanning_tree(const edge *edges, unsigned int size, unsigned int order,
        unsigned int **tree)
{
    unsigned int *visited = calloc(order, sizeof(unsigned int));
    *tree = malloc((order - 1) * sizeof(unsigned int));
    unsigned int len = 0;
    if (visited == NULL || *tree == NULL) {
        free(visited);
        free(*tree);
        *tree = NULL;
        return 0;
    }
    spanning_tree_recursive(edges, size, order, visited, *tree, 0, -1, &len);
    free(visited);
    return len;
}


/* Calculate the nth triangular number T(n) */
unsigned int triangular_number(unsigned int n)
{
    return (n * (n + 1)) / 2;
}
 
/* Construct a complete graph on v vertices */
unsigned int complete_graph(unsigned int v, edge **edges)
{
    unsigned int n = triangular_number(v - 1);
    unsigned int i, j, k;
    *edges = malloc(n * sizeof(edge));
    if (edges != NULL) {
        for (i = 0, k = 0; i < v - 1; i++) {
            for (j = i + 1; j < v; j++) {
                (*edges)[k].first = i;
                (*edges)[k].second = j;
                k++;
            }
        }
    }
    else {
        n = 0;
    }
    return n;
}
 
int main(void)
{
    edge *edges;
    const unsigned int order = 5; /* Vertices */
    const unsigned int size = complete_graph(5, &edges); /* Edges */
    unsigned int *tree;
    unsigned int tree_size = spanning_tree(edges, size, order, &tree);
    unsigned int e;
    for (e = 0; e < tree_size; e++) {
        printf("(%u, %u) ", edges[tree[e]].first, edges[tree[e]].second);
    }
    putchar('\n');
    free(edges);
    free(tree);
    return 0;
}