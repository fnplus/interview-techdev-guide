class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.start_node = None

    def add(self, data):
        new_node = Node(data)
        if self.start_node == None:
            self.start_node = new_node
        else:
            new_node.next = self.start_node
            self.start_node = new_node
        return data


    # def size():

    def get(self, idx):
        save = self.start_node
        for i in range(idx):
            save = save.next
        return save.data

list = SinglyLinkedList()

list.add('toto')
list.add('tata')
list.add('tutu')

print(list.get(0))
print(list.get(1))
print(list.get(2))
# and save != None
