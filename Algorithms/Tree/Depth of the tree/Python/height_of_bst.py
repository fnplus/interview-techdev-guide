class Node:
    def __init__(self,data):
        self.right=self.left=None
        self.data = data
        
class Solution:
    def insert(self,root,data):
        if root==None:
            return Node(data)
        else:
            if data<=root.data:
                cur=self.insert(root.left,data)
                root.left=cur
            else:
                cur=self.insert(root.right,data)
                root.right=cur
        return root
        
    def getHeight(self,root):
        m = A()
        temp = m.getHeightUtil(root)
        return temp 
class A:
    def method1(self,root):
        print root.data
        
    def getHeightUtil(self,root):
        if root == None:
            return 0
        lh = self.getHeightUtil(root.left)
        rh = self.getHeightUtil(root.right)
        if lh>rh:
            return lh+1
        else:
            return rh+1
T=int(raw_input())
myTree=Solution()
root=None
for i in range(T):
    data=int(raw_input())
    root=myTree.insert(root,data)
height=myTree.getHeight(root)
print "Height of tree is: " + str(height) 
