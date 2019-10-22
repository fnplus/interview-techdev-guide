# python3

from queue import Queue
import sys, threading
sys.setrecursionlimit(10**7) # max depth of recursion
threading.stack_size(2**27)  # new thread will get stack of such size

class Node:
        def __init__(self, key):
                self.key = key
                self.left_child = None
                self.next_sibling = None 
                self.last_sibling = None
        
class Tree:
        def __init__(self):
                self.root = None
                self.nodes = []
        
        def construct_tree(self, nodes):
                for i in range(len(nodes)):
                        self.nodes.append(Node(i))
                for number, node in enumerate(nodes):
                        if node == -1:
                                self.root = self.nodes[number]
                        else:
                                parent_node = self.nodes[node]
                                if parent_node.left_child is None:
                                        parent_node.left_child = self.nodes[number]
                                        self.nodes[number].last_sibling = self.nodes[number]
                                else:
                                        current_sibling = self.nodes[node].left_child
                                        current_sibling.last_sibling.next_sibling = self.nodes[number]
                                        current_sibling.last_sibling = current_sibling.last_sibling.next_sibling
                        

        def bfs(self):
                queue = Queue()
                queue.put(self.root)
                level = 0
                size = 1
                while not queue.empty():
                        cur_node = queue.get()
                        size -= 1
                        child = cur_node.left_child
                        while child is not None:
                                queue.put(child)
                                child = child.next_sibling
                        if size == 0:
                                level += 1
                                size = queue.qsize()
                return level
                                


class TreeHeight:
        def read(self):
                self.n = int(sys.stdin.readline())
                self.parent = list(map(int, sys.stdin.readline().split()))

        def compute_height(self):
                tree = Tree()
                tree.construct_tree(self.parent)
                return tree.bfs()

def main():
  tree = TreeHeight()
  tree.read()
  print(tree.compute_height())

threading.Thread(target=main).start()
        
