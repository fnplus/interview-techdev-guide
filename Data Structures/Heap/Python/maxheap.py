import heapq

class Solution:

    def kClosest(self, points: List[List[int]], K: int) -> List[List[int]]:
        
        maxHeap = []
        
        for (x, y) in points:
            distance = math.sqrt(x*x + y*y)
            
            if len(maxHeap) >= K:
                if -1 * distance > maxHeap[0][0]:
                    heapq.heappushpop(maxHeap, [-1 * distance, [x, y]])
            else:
                heapq.heappush(maxHeap, [-1 * distance, [x, y]])
        
        resList = []
        
        for _ in range(K):
            resList.append(heapq.heappop(maxHeap)[1])
        
        # return the list
        return resList
