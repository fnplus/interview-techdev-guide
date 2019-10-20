'''
Implementation of interpolation search
Time Complexity: O(log(log(n)) if elements uniformly distributed
                 O(n) worst case
Space Complexity: O(1)

used for sorted and uniformly distributed arrays (for definition: https://cs.stackexchange.com/questions/112782/what-is-the-meaning-of-uniform-distribution-of-elements-in-an-array)
'''

def interpolation_search(arr, n, x):
    lo = 0
    hi = n-1

    while lo<=hi and x>=arr[lo] and x<=arr[hi]:
        if lo==hi:
            if x==arr[lo]:
                return lo
            else:
                return -1

        else:
            #interpolation formula for uniformly distributed sorted array
            pos = lo + int(((x-arr[lo])*(hi-lo))/(arr[hi]-arr[lo]))

            if x == arr[pos]:
                return pos
            elif x > arr[pos]:
                lo = pos + 1
            elif x < arr[pos]:
                hi = pos -1

    return -1

arr = [2,3,4,10,40]
x = 10

index = interpolation_search(arr, len(arr), x)
if index==-1:
    print("Element not present in list")
else:
    print("Element",x,"is present at",index)
