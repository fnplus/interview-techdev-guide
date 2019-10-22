''' Similar to fractional KnapSack except 
you cannot break an item, 
either pick the complete item, 
or don’t pick it (0-1 property).'''

def maxKnapSack(W , wt , profit , n): 
  
    if n == 0 or W == 0 : 
        return 0
  
    # If weight of item is more than capacity W
    # then this item cannot be included in the optimal solution 
  
    if (wt[n-1] > W): 
        return maxKnapSack(W , wt , profit , n-1) 
  
    # return the maximum of two cases: 
    # (a) item included 
    # (b) not included 
    else: 
        return max(profit[n-1] + maxKnapSack(W-wt[n-1] , wt , profit , n-1), 
                   maxKnapSack(W , wt , profit , n-1)) 
  
# Driver Program
if __name__ == '__main__':
    profit = [60, 100, 120] 
    wt = [10, 20, 30] 
    W = 50
    n = len(profit) 
    print(maxKnapSack(W , wt , profit , n))