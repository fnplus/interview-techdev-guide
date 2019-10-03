# implementation of postorder Traversal in python

#class TreeNode:
#    def __init__(self,val,left=None,right=None):
#        self.key=val
#        self.left=left
#        self.right=right



def postorderTraversal(root):
    if root.left:
        postorderTraversal(root.left)
    if root.right:
        postorderTraversal(root.right)
    print(root.key)
  