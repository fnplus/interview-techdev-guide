'''
Implementation of Jump search
Time Complexity: O(sqrt(n))
Space Complexity: O(1)
'''
import math

def jump_search(arr, x):
    l = len(arr)

    p_ind = 0 #previous_index
    c_ind = 0 #current_index
    step = int(math.sqrt(len(arr))) #optimal jump_step

    #keep looking forward till the indexed element becomes greater than the searched element and then do linear search
    while c_ind <= l and x>arr[min(c_ind, l)]:
        p_ind = c_ind
        c_ind += step

    #linear search
    for i in range(p_ind+1, c_ind+1):
        if x == arr[i]:
            return i

    return -1


arr = [2,3,4,10,40]
x = 40

index = jump_search(arr, x)
if index==-1:
    print("Element not present in list")
else:
    print("Element",x,"is present at",index)
