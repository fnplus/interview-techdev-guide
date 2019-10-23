# implementation of inorder Traversal in python

class TreeNode:
  def __init__(self,val,left=None,right=None):
    self.key=val
    self.left=left
    self.right=right

class BinarySearchTree:
  def __init__(self,root):
    self.root=TreeNode(root)

  def insert(self,value):
    node=TreeNode(value)
    y=None
    x=self.root
    while x!=None:
      y=x
      if x.key<node.key:
        x=x.right
      else:
        x=x.left
    if y==None:
      self.root=node
    elif y.key<node.key:
      y.right=node
    else:
      y.left=node

  def inorder(self,root):
    if root.left:
      self.inorder(root.left)
    print(root.key)
    if root.right:
      self.inorder(root.right)
    
  def inorderTraversal(self):
    self.inorder(self.root)
  
def main():
  tree=BinarySearchTree(6)
  tree.insert(2)
  tree.insert(8)
  tree.insert(1)
  tree.insert(10)
  tree.insert(3)
  tree.insert(13)
  tree.inorderTraversal()

if __name__ == "__main__":
    main()
