INF = 1000000000000000000


def floyd_warshall(vertex, adjacency_matrix):
    # vertex is no of vertices

    # calculate all pair shortest path
    for k in range(0, vertex):
        for i in range(0, vertex):
            for j in range(0, vertex):
                adjacency_matrix[i][j] = min(
                    adjacency_matrix[i][j], adjacency_matrix[i][k]+adjacency_matrix[k][j])
    return adjacency_matrix  # all pair shortest path


# example
adjacency_matrix = [
    [0, 1, 3, INF],
    [1, 0, 1, INF],
    [3, 1, 0, 2],
    [INF, INF, 2, 0]
]
no_of_vertices = len(adjacency_matrix)
shortest_path_matrix = floyd_warshall(no_of_vertices, adjacency_matrix)
print("shortest path matrix is ", shortest_path_matrix)
