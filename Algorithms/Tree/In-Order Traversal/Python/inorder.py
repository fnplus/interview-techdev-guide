# implementation of inorder Traversal in python

# class TreeNode:
#   def __init__(self,val,left=None,right=None):
#      self.key=val
#      self.left=left
#      self.right=right



def inorderTraversal(root):
  if root.left:
    inorderTraversal(root.left)
  print(root.key)
  if root.right:
    inorderTraversal(root.right)
