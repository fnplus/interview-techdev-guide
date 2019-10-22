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

    def search_in_tree(self,value):
        if self.root is None:
            return f'value({value}) not found'
        elif self.root.value == value:
            return f'value({value}) found in root'
        else:
            root = self.root
            while root:
                if value == root.value:
                    return f'value({value}) found in tree'
                elif value < root.value:
                    if root.left is None:
                        return f'value({value}) not found'
                    else:
                        root = root.left
                else:
                    if root.right is None:
                        return f'value({value}) not found'
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
    print() # Just for a newline :)
    # Searching for a value in the tree
    print(BST.search_in_tree(value=12))
    print(BST.search_in_tree(value=14))