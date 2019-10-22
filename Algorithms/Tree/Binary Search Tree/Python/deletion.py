class BinarySearchTreeNode:
    def __init__(self,val,left=None,right=None,info=None):
        self.val=val
        self.left=left
        self.right=right
        self.info=info
    
class BinarySearchTree:
    def __init__(self,root,x=1,lst=[]):
        self.root=BinarySearchTreeNode(root)
        self.lst=lst
    def insertNode(self,value):
        node=BinarySearchTreeNode(value)
        y=None
        x=self.root
        while x!=None:
            y=x
            if x.val<node.val:
                x=x.right
            else:
                x=x.left
        if y==None:
            self.root==node
        elif node.val<y.val:
            y.left=node
        else:
            y.right=node

    def inorder(self,root):
        if root.left:
            self.inorder(root.left)
        self.lst.append(str(root.val))
        if root.right:
            self.inorder(root.right)
    
    def inorderTraversal(self):
        self.lst=[]
        self.inorder(self.root)
        return " ".join(self.lst)

    def delete(self,delete_node):
        if delete_node.left is not None and delete_node.right is None:
            return delete_node.left
        elif delete_node.left is None and delete_node.right is not None:
            return delete_node.right
        elif delete_node.left is not None and delete_node.right is not None:
            repnode=delete_node.right
            if repnode.left is None:
                repnode.left=delete_node.left
                return repnode
            else:
                while repnode.left:
                    rep=repnode
                    repnode=repnode.left
                repnode.left=delete_node.left
                if repnode.right:
                    rep.left=repnode.right
                repnode.right=delete_node.right
                return repnode
    
    def deleteNode(self,value):
        x=self.root
        if x.val==value:
            self.root=self.delete(x)
        else:
            y=None
            while x.val != value:
                y=x
                if x.val<value:
                    x=x.right
                else:
                    x=x.left
            if y.left.val==value:
                y.left=self.delete(x)
                y.left.left=x.left
            elif y.right.val==value:
                y.right=self.delete(x)
                y.right.left=x.left

def main():
    k=BinarySearchTree(6)
    k.insertNode(6)
    k.insertNode(8)
    k.insertNode(9)
    k.insertNode(4)
    k.insertNode(3)
    k.insertNode(5)
    print(k.inorderTraversal())
    k.deleteNode(6)
    print(k.inorderTraversal())

if __name__ == "__main__":
    main()
