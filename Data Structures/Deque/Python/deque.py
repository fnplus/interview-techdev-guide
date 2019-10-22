class Deque(object):
    """An implementation of the deque (doble ended queues) abstract data type
        using Python's inbuilt list"""
    
    def __init__(self):
        self.items = []
        
    def add_front(self, item):
        self.items.append(item)
    
    def add_rear(self, item):
        self.items.insert(0, item)
    
    def remove_front(self):
        return self.items.pop()
    
    def remove_rear(self):
        return self.items.pop(0)
    
    def size(self):
        return len(self.items)
    
    def isEmpty(self):
        return self.items == []
    
    def __str__(self):
        """String representation of Deque ADT"""
        return '<' + 'Deque: ' + str(self.items) + '>'
    
# Basic usage
def main():
    languages = Deque()
    languages.add_front('Java')
    languages.add_front('C++')
    languages.add_rear('Python')
    languages.add_front('Go')
    print(languages.remove_front())
    print(languages.remove_rear())
    print(languages.remove_front())
    print(languages.size())
    print(languages.isEmpty())
    
# Basic usage
if __name__ == "__main__":
    main()
