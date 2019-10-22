class Stack:
    stack = []  # empty list
    max_size = -1

    def __init__(self, size=-1):  # defining maximum size in the constructor
        self.max_size = size

    def push(self, item):
        if self.max_size == -1:  # if there is no limit in stack
            self.stack.append(item)
        elif len(self.stack) < self.max_size:  # if max limit not crossed
            self.stack.append(item)
        else:  # if max limit crossed
            print('Can\'t add item. Stack limit is :', self.max_size)
            raise RuntimeError

    def pop(self):
        if len(self.stack) > 0:
            temp = self.stack[-1]
            self.stack.pop()
            return temp
        else:
            print('stack is already empty.')
            raise IndexError

    def top(self):
        if len(self.stack) > 0:
            return self.stack[-1]  # returns the last item
        else:
            print('stack is already empty.')
            raise IndexError

stack = Stack()
stack.push(1)  # push item 1
stack.push(2)  # push item 2
print('Pop the last item :', stack.pop())  # pop the top item
print('Current top item is :', stack.top())  # current top item
