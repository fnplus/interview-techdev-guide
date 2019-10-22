class Node:
	def __init__(self, value):
		self.value = value
		self.left = None
		self.right = None

def insert_node(root_node, new_node):
	if new_node.value > root_node.value:
		if root_node.right is None:
			root_node.right = new_node
		else:
			insert_node(root_node.right, new_node)
	else:
		if root_node.left is None:
			root_node.left = new_node
		else:
			insert_node(root_node.left, new_node)

def search(root_node, key, result):
	if key == root_node.value:
		result.insert(0, 'root')
	elif key > root_node.value:
		result.append('right')
		search(root_node.right, key, result)
	elif key < root_node.value:
		result.append('left')
		search(root_node.left, key, result)
	return result

tree_nodes = [7, 8, 2, 3, 1, 4, 6, 9]
root_node = Node(tree_nodes[0])
tree_nodes.pop(0)
for tree_node in tree_nodes:
	new_node = Node(tree_node)
	insert_node(root_node, new_node)
key = 6
result = search(root_node, key, [])
print(result)