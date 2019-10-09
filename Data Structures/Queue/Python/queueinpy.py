from collections import deque

# Initializing a Queue object
Q = deque()
# Inserting to the Queue
Q.append(1)
Q.append(2)
Q.append(3)
# Printing the Queue
print(list(Q))
# Popping an element from the created Queue (i.e., which pops from the front)
Q.popleft()
print(list(Q))