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


    def size(self):
        save = self.start_node
        i = 0
        while save != None:
            save = save.next
            i += 1
        return i

    def remove(self, data):
        if self.start_node.data == data:
            self.start_node = self.start_node.next
            return
        node = self.start_node
        while node.next != None:
            if node.next.data == data:
                break
            node = node.next
        if node.next != None:
            node.next = node.next.next


    def get(self, idx):
        save = self.start_node
        for i in range(idx):
            save = save.next
        return save.data
