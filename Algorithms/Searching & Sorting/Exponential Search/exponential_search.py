'''
Implementation of exponential search
Time Complexity: O(logn)
Space Complexity: Depends on implementation of binary_search {O(logn): recursive, O(1):iterative}

Used for unbounded search, when the length of array is infinite or not known
'''

#iterative implementation of binary search
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

def exponential_search(arr, n, x):
    if x==arr[0]:
        return 0;

    i=1 #index
    #keep increasing index until the indexed element is smaller and then do binary search
    while i<n and x>arr[i]:
        i = i*2

    return binary_search(arr, int(i/2), min(i, n), x)

arr = [2,3,4,10,40]
x = 10

index = exponential_search(arr, len(arr), x)
if index==-1:
    print("Element not present in list")
else:
    print("Element",x,"is present at",index)
