class Node:

    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data


def print_in_order(root):
    if root:
        print_in_order(root.left)
        print(root.data, end=" ")
        print_in_order(root.right)


class BinarySearchTree:

    def __init__(self):
        self.root = None

    def insert(self, val):

        if self.root is None:
            self.root = Node(val)
            return

        current_node = self.root

        while True:

            if current_node.data < val:
                if current_node.right is not None:
                    current_node = current_node.right

                else:
                    current_node.right = Node(val)
                    break
            else:
                if current_node.left is not None:
                    current_node = current_node.left

                else:
                    current_node.right = Node(val)
                    break


if __name__ == "__main__":
    tree = BinarySearchTree()
    element_list = [11, 12, 13, 14, 15, 16, 17, 18, 19]

    for element in element_list:
        tree.insert(element)

    print_in_order(tree.root)

