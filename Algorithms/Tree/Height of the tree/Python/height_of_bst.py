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
        if self.root is None:
            self.root = newNode
        else:
            root = self.root
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

    def height_of_tree(self, root):
        if root is None:
            return 0
        else:
            l_subtree_height = self.height_of_tree(root.left)
            r_subtree_height = self.height_of_tree(root.right)

            return max(l_subtree_height, r_subtree_height) + 1

if __name__ == '__main__':
    # Initializing a Binary Search Tree
    BST = BinarySearchTree()
    # Inserting into the tree in a BST fashion
    BST.insert_into_tree(value=190)
    BST.insert_into_tree(value=14)
    BST.insert_into_tree(value=199)
    BST.insert_into_tree(value=3)
    BST.insert_into_tree(value=25)

    # Calculating & printing the height of tree
    print(BST.height_of_tree(root=BST.root))
