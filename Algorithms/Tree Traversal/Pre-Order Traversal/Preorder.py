# implementation of preorder Traversal in python

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

  def preorder(self,root):
    print(root.key)
    if root.left:
      self.preorder(root.left)
    if root.right:
      self.preorder(root.right)
    
  def preorderTraversal(self):
    self.preorder(self.root)
  
def main():
  tree=BinarySearchTree(6)
  tree.insert(2)
  tree.insert(8)
  tree.insert(1)
  tree.insert(10)
  tree.insert(3)
  tree.insert(13)
  tree.preorderTraversal()

if __name__ == "__main__":
    main()
