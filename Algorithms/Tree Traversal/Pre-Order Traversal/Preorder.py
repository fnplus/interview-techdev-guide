# implementation of preorder Traversal in python

#class TreeNode:
#    def __init__(self,val,left=None,right=None):
#        self.key=val
#        self.left=left
#        self.right=right



def preorderTraversal(root):
    print(root.key)
    if root.left:
        preorderTraversal(root.left)
    if root.right:
        preorderTraversal(root.right)
    
  