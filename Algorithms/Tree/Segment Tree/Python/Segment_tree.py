#implementation of segment tree
class segmentTree:
    def __init__(self,arr):
        self.arr=arr
        self.tree=[0 for i in range(2*len(arr))]
        self.end=len(arr)-1
        self.treenode=1
        self.start=0
        self.build(arr,self.start,self.end,self.treenode)
    
    def build(self,arr,start,end,treenode):
        if start==end:
            self.tree[treenode]=arr[start]
            return 
        mid=(start+end)//2
        self.build(arr,start,mid,2*treenode)
        self.build(arr,mid+1,end,2*treenode+1)
        
        self.tree[treenode]=self.tree[2*treenode]+self.tree[2*treenode+1]
    
    def __treeUpdate(self,treenode,start,end,index,value):
        if start==end:
            self.arr[index]+=value
            self.tree[treenode]+=value
        else:
            mid=(start+end)//2
            if start<=index<=mid:
                self.__treeUpdate(2*treenode,start,mid,index,value)
            elif mid<index<=end:
                self.__treeUpdate(2*treenode+1,mid+1,end,index,value)
            self.tree[treenode]=self.tree[2*treenode]+self.tree[2*treenode+1]
        
    def __queryRange(self,treenode,start,end,q_start,q_end):
        if q_start>end or q_end<start:
            return 0
        elif q_start<=start and q_end>=end:
            return self.tree[treenode]
        else:
            mid=(start+end)//2
            return self.__queryRange(2*treenode,start,mid,q_start,q_end)+self.__queryRange(2*treenode+1,mid+1,end,q_start,q_end)
    
    def update(self,index,value):
        value=value-self.arr[index] # it gives the difference between value present and value updated
        self.__treeUpdate(self.treenode,self.start,self.end,index,value)
        
    def query(self,start,end):
        return self.__queryRange(self.treenode,self.start,self.end,start,end)

def main():
    tree=segmentTree([1,2,3,4,5,6,7,8,9])
    print(tree.tree)
    print(tree.arr)
    tree.update(4,10) # value at arr[4] is 5 update value is 10 
    print(tree.tree)
    print(tree.query(7,9))

if __name__ == "__main__":
    main()