# Implementation of stack using list in Python 
# Stack is "LIFO(Last In First Out)"

# push method is used to add an item on top of stack 
# pop method is used to get the topmost item from stack
import copy 


class Stack:
    """
    Just for the sake of teaching, this stack is implemented
    in such a way that it uses a minimal amount of Python list methods.
    """

    def __init__(self, values: list = None):
        if values:
            self.data = copy.deepcopy(values)
        else:
            self.data = []

    def push(self, value):
        """
        Append method. Add an element to the top of the stack
        """
        self.data.insert(0, value)

    def pop(self):
        """
        Pop method. Take an element from the top of the stack if it's not empty.
        Throws an exception for an empty stack.
        """
        if len(self.data) > 0:
            value = self.data[0]
            self.data = self.data[1:]
            return value
        else:
            raise Exception("The stack is empty!")

    def __str__(self):
        if len(self.data) > 0:
            return ",".join(self.data)
        else:
            return "[]"



stack = Stack(['first','second','third','four'])
stack.push("abc") 
stack.push("def") 

print(stack) 
print(stack.pop()) 
print(stack) 
print(stack.pop()) 
print(stack) 