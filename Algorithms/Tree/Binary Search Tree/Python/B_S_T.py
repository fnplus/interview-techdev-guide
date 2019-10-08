class Node:
    def __init__(self, value):
        self.value = value
        self.left, self.right = None, None

    def get_left_child(self):
        return self.left
    
    def get_right_child(self):
        return self.right
    
class BinarySearchTree:
    def __init__(self):
        self.root = None
    
    def insert_into_tree(self, value):
        newNode = Node(value=value)
        root = self.root
        if root is None:
            self.root = newNode
        else:
            while root:
                if value < root.value:
                    if root.left is None:
                        root.left = newNode
                        break
                    else:
                        root = root.left
                else:
                    if root.right is None:
                        root.right = newNode
                        break
                    else:
                        root = root.right
            
    
    def inorder_traversal(self, root):
        if root:
            self.inorder_traversal(root.left)
            print(root.value, ' -> ', end='')
            self.inorder_traversal(root.right)

if __name__ == '__main__':
    # Initializing a Binary Search Tree
    BST = BinarySearchTree()
    # Inserting into the tree in a BST fashion
    BST.insert_into_tree(value=190)
    BST.insert_into_tree(value=14)
    BST.insert_into_tree(value=199)
    BST.insert_into_tree(value=3)
    # Inorder traversal of the tree
    BST.inorder_traversal(root=BST.root)