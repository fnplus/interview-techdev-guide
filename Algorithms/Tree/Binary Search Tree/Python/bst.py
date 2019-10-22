class Node: 
    def __init__(self,key): 
        self.left = None
        self.right = None
        self.val = key 
        
    def insert(root,node): 
    if root is None: 
        root = node 
    else: 
        if root.val < node.val: 
            if root.right is None: 
                root.right = node 
            else: 
                insert(root.right, node) 
        else: 
            if root.left is None: 
                root.left = node 
            else: 
                insert(root.left, node)
    
    def inorder(root): 
    if root: 
        inorder(root.left) 
        print(root.val) 
        inorder(root.right)
    
    r = Node(37) 
    insert(r,Node(84)) 
    insert(r,Node(45)) 
    insert(r,Node(63)) 
    insert(r,Node(20)) 
    insert(r,Node(15)) 
    insert(r,Node(8)) 
    
    inorder(r)
