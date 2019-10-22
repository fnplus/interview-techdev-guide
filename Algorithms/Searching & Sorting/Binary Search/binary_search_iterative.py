'''
This is the iterative implmentation of binary search
Time Complexity: O(logn)
Space Complexity: O(1)

Better than the recursive implementation in terms of space complexity
'''

def binary_search(arr, s, e, x):
    '''
    #arr: the array in which we need to find an element (sorted, increasing order)
    #s: start index
    #e: end index
    #x: element we are looking for
    '''
    #search until arr becomes empty []
    while (e>=s):
        m = s + int((e-s)/2) #middle index

        if x==arr[m]: #if found at mid return index
            return m
        elif x>arr[m]: #if x>arr[m] search only in the right array
            s = m+1
        elif x<arr[m]: #if x<arr[m] search only in the left array
            e = m-1

    return -1

arr = [2,3,4,10,40]
x = 12

index = binary_search(arr, 0, len(arr)-1,  x)
if index==-1:
    print("Element not present in list")
else:
    print("Element",x,"is present at",index)
