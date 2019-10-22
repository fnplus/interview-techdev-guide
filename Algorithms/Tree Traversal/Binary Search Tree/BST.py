class Node():
    def __init__(self,data):
        self.val=data
        self.left=None
        self.right=None
        
def insert(root,node):
    if root is None:
        root=node
    else:
        if root.val<node.val:
            if root.right is None:
                root.right=node
            else:
                insert(root.right,node)
        if root.val>node.val:
            if root.left is None:
                root.left=node
            else:
                insert(root.left,node)
def inorder(root):
    if root:
        inorder(root.left)
        print(root.val,end=" ")
        inorder(root.right)
def preorder(root):
    if root:
        print(root.val,end=" ")
        preorder(root.left)
        preorder(root.right)
def postorder(root):
    if root:
        postorder(root.left)
        postorder(root.right)
        print(root.val,end=" ")
arr=input()
arr=list(map(str,arr.split(" ")))
r=Node(arr[0])
l=len(arr)
for i in range(1,l):
    insert(r,Node(arr[i]))
print("INORDER")
inorder(r)
print("\r")
print("PREORDER")
preorder(r)
print("\r")
print("POSTORDER")
postorder(r)
# E D B C A F H G
    