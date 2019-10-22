class PriorityQueue(dict):
    def __init__(self,*args,**kwargs):
        super(PriorityQueue,self).__init__(*args,**kwargs)
        self._rebuild_heap()
    
    def _rebuild_heap(self):
        self._heap=[(v,k) for k,v in self.items()]
        heapify(self._heap)
    
    def smallest(self):
        heap=self._heap
        v,k=heap[0]
        while k not in self or self[k]!=v:
            heappop(heap)
            v,k=heap[0]
        return k
    
    def pop_smallest(self):
        heap=self._heap
        v,k=heappop(heap)
        while k not in self or self[k]!=v:
            v,k=heappop(heap)
        del self[k]
        return k
    
    def __setitem__(self,key,val):
        super(PriorityQueue,self).__setitem__(key,val)
        if len(self._heap)<2*len(self):
            heappush(self._heap,(val,key))
        else:
            self._rebuild_heap()
    
    def setdefault(self,key,val):
        if key not in self:
            self[key]=val
            return val
        return self[key]
    
    def update(self,*args,**kwargs):
        super(PriorityQueue,self).update(*args,**kwargs)
        self._rebuild_heap()
    
    def sorted_iter(self):
        while self:
            yield self.pop_smallest()
            
if __name__ == "__main__":
  queue = PriorityQueue()
  # queue stores data similar to a dictonary
  queue[5] = 0 # here 0 is priority
