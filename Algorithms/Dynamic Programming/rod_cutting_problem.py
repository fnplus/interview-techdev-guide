INT_MIN = -32767
  
# Returns the best price for a rod of length n and prices of different pieces 
def cutRod(price, n): 
    pro = [0 for x in range(n+1)] 
    pro[0] = 0
  
    for i in range(1, n+1): 
        max_pro = INT_MIN 
        for j in range(i): 
             max_pro = max(max_pro, price[j] + pro[i-j-1]) 
        pro[i] = max_pro 
  
    return pro[n] 
  
# Driver program 
if __name__ == '__main__':
    len_price = [1, 5, 8, 9, 10, 17, 17, 20] 
    size = len(len_price) 
    print("Maximum Obtainable Value is " + str(cutRod(len_price, size))) 