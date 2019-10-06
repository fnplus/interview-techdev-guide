class Node:
    def __init__(self, value=None, nextNode=None, prevNode=None):
        self.value = value
        self.nextNode = nextNode
        self.prevNode = prevNode

    def get_next_node(self):
        return self.nextNode
    
    def get_prev_node(self):
        return self.prevNode

    def get_node_val(self):
        return self.value
    
class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
        self.chain_len = 0

    def add_node_to_chain(self, value=None, Front=False):
        new_node = Node(value=value)
        if Front:
            self.head.prevNode = new_node
            new_node.nextNode = self.head
            self.head = new_node
        else:
            if self.head is None:
                self.head = new_node
                self.tail = self.head
            else:
                self.tail.nextNode = new_node
                new_node.prevNode = self.tail
                self.tail = new_node
        self.chain_len += 1

    def get_head_node(self):
        return self.head

    def get_tail_node(self):
        return self.tail
    
    def get_chain_length(self):
        return self.chain_len

    def print_chain(self):
        head = self.head
        while head:
            print(' ',head.value, "->", end='')
            head = head.get_next_node()
        else:
            print(' chain_end')
    
if __name__ == '__main__':
    my_dl_list = DoublyLinkedList()

    my_dl_list.add_node_to_chain(1)
    my_dl_list.add_node_to_chain(2)
    my_dl_list.add_node_to_chain(3)
    my_dl_list.add_node_to_chain(4)

    print(f"Length of chain -> {my_dl_list.get_chain_length()}")

    my_dl_list.print_chain()

    print('-- Now adding a node to the front of the chain --')

    my_dl_list.add_node_to_chain(5, Front=True)

    my_dl_list.print_chain()