'''
#######################
Implementation of Bellman Ford Algorithm in Python


Input: Weighted Directed Graph



Output: Minimum distance for each vertex from source


#######################
'''
graph = []  #dictionary to store the weighted directed graph
dist = [] # storing the minimum distance from source over each iteration
def bellman_ford(src , v , e , graph):
    v_copy = v
    #initial weights
    dist = [float("Inf")] * v
    dist[src] = 0

    #relaxing all edges
    for i in range(v-1):
        for u , v , w in graph:
            if dist[u] != float("Inf") and dist[u] + w < dist[v]:
                dist[v] = dist[u] + w

    #negative weight cycle check
    for u , v , w in graph:
        if dist[u] != float("Inf") and dist[u] + w < dist[v]:
            print("Graph contains negative edge cycle")
            return
    
    #printing out the final distances
    #print("number of vertices :" , v)
    print("Vertex   Distance from Source")
    for i in range(v_copy):

        print(i ,"   \t\t",dist[i])


v = int(input("Enter the number of vertices: "))
e = int(input("Enter the number of edges: "))


#populating the graph
for i in range(e):
    e_source = int(input("Enter edge source: "))
    e_destination = int(input("Enter edge destination: "))
    e_weight = int(input("Enter edge weight: "))
    graph.append([e_source , e_destination , e_weight])

sc = int(input("\nEnter the source vertex: "))
#print(sc , v , e)
bellman_ford(sc , v , e , graph)
