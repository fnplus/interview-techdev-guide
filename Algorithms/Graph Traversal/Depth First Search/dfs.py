def dfs_recursive(graph, vertex, path=[]):
    path += [vertex]

    for neighbor in graph[vertex]:
        if neighbor not in path:
            path = dfs_recursive(graph, neighbor, path)

    return path


adjacency_matrix = {0: [1, 2], 1: [2,3,4], 2: [3],
                    3: [4], 4: []}

print(dfs_recursive(adjacency_matrix, 0))
