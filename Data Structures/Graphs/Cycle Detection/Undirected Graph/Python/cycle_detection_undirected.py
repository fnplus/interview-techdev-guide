# Python Program for union-find algorithm to detect cycle in a undirected graph 

from collections import defaultdict 

#This class represents a undirected graph using adjacency list representation 
class Graph: 

	def __init__(self,vertices): 
		self.V= vertices
		self.graph = defaultdict(list)


	# function to add an edge to graph 
	def addEdge(self,u,v): 
		self.graph[u].append(v) 

	# find subset of an element i 
	def find_parent(self, parent,i): 
		if parent[i] == -1: 
			return i 
		if parent[i]!= -1: 
			return self.find_parent(parent,parent[i]) 

	# union of two subsets 
	def union(self,parent,x,y): 
		x_set = self.find_parent(parent, x) 
		y_set = self.find_parent(parent, y) 
		parent[x_set] = y_set 


	# cycle detection function
	def isCyclic(self): 
		
		# Initialize all subsets as single element sets 
		parent = [-1]*(self.V) 

		for i in self.graph: 
			for j in self.graph[i]: 
				x = self.find_parent(parent, i) 
				y = self.find_parent(parent, j) 
				if x == y: 
					return True
				self.union(parent,x,y) 


# Create a graph given in the above diagram 
print("Enter no of Vertices: ")
V = int(input())
g = Graph(V)

print("Enter no of Edges: ")
E = int(input())

print("Enter Edges")
for i in range(E):
  u, v = input().split()
  u = int(u)
  v = int(v)
  g.addEdge(u,v)

if g.isCyclic(): 
	print("Graph contains cycle")
else : 
	print("Graph does not contain cycle")

