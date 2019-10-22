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

def preorder_traversal(node):
	if node:
		print(node.value)
		preorder_traversal(node.left)
		preorder_traversal(node.right)

def inorder_traversal(node):
	if node:
		inorder_traversal(node.left)
		print(node.value)
		inorder_traversal(node.right)

def postorder_traversal(node):
	if node:
		postorder_traversal(node.left)
		postorder_traversal(node.right)
		print(node.value)

tree_nodes = [7, 8, 2, 3, 1, 4, 6, 9]
root_node = Node(tree_nodes[0])
tree_nodes.pop(0)
for tree_node in tree_nodes:
	new_node = Node(tree_node)
	insert_node(root_node, new_node)
preorder_traversal(root_node)
inorder_traversal(root_node)
postorder_traversal(root_node)