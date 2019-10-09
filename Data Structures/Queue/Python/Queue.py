## ARRAY IMPLEMENTATION OF QUEUE ## 

class ArrayQueue:
    def __init__(self, capacity):
        self.front = -1
        self.rear = -1
        self.capacity = capacity
        self.arr = [0 for i in range(self.capacity)]
    
    def Enqueue(self, data):
        if self.rear + 1 == self.capacity:
            print("Can't Insert Queue is Full")
            return
        if self.front == -1:
            self.front = 0
        self.rear += 1
        self.arr[self.rear] = data
        print("Inserted ", data)
        return
    
    def Dequeue(self):
        if self.front == -1:
            print("Can't Delete Queue is Empty")
            return
        print("Element deleted is ", self.arr[self.front])
        self.front += 1
        
        if self.front > self.rear:
            self.front = -1
            self.rear = -1
    
    def Display(self):
        if self.front == -1:
            print("Queue is Empty")
            return
        for i in range(self.front, self.rear + 1, 1):
            print(self.arr[i], end = " ")
        print()

## LINKED LIST IMPLEMENTATION OF QUEUE ##

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LLQueue:
    def __init__(self):
        self.front = None
        self.rear = None
    
    def Enqueue(self, data):
        data_node = Node(data)
        if self.rear == None:
            self.front = data_node
            self.rear = data_node
        else:
            self.rear.next = data_node
            self.rear = data_node
        print("Inserted ", data)
        return
    
    def Dequeue(self):
        if self.front == None:
            print("Can't Delete. Queue is Empty")
            return
        node_value = self.front.data
        self.front = self.front.next
        if self.front == None:
            self.rear = None
        print("Deleted ", node_value)
    
    def Display(self):
        if self.front == None:
            print("Queue is Empty")
            return
        it = self.front
        while it != None:
            print(it.data, end = " ")
            it = it.next
        print()

if __name__ == "__main__":
    queue = ArrayQueue(6)
    queue.Enqueue(2)
    queue.Enqueue(3)
    queue.Enqueue(4)
    queue.Enqueue(5)
    queue.Enqueue(6)
    queue.Display() #Output: 2 3 4 5 6
    queue.Dequeue()
    queue.Dequeue()
    queue.Dequeue()
    queue.Dequeue()
    queue.Dequeue()
    queue.Display() #Output: Queue is Empty
    queue = LLQueue()
    queue.Enqueue(2)
    queue.Enqueue(3)
    queue.Enqueue(4)
    queue.Enqueue(5)
    queue.Enqueue(6)
    queue.Display() #Output: 2 3 4 5 6
    queue.Dequeue()
    queue.Dequeue()
    queue.Dequeue()
    queue.Dequeue()
    queue.Dequeue()
    queue.Display() #Output: Queue is Empty
        
