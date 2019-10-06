# G is a adjacency matrix.
# G[u][v] represents the weight of edge (u, v)
# G[u][v] == 0 means there is no edge from u to v.
def floyd(G):
	len_g = len(G)
	dp = [[float("inf") for _ in range(len_g)] for _ in range(len_g)]

	for v in range(len_g):
		dp[v][v] = 0

	for u in range(len_g):
		for v in range(len_g):
			if G[u][v] > 0:
				dp[u][v] = G[u][v]

	for k in range(len_g):
		for u in range(len_g):
			for v in range(len_g):
				if dp[u][v] > dp[u][k] + dp[k][v]:
					dp[u][v] = dp[u][k] + dp[k][v]
	return dp

G = [
	[0, 1, 2, 0],
	[0,0,0,1],
	[0,0,0,3],
	[0,0,0,0]
]
print(floyd(G))