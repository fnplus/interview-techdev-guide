#Jump search
import math

def jumpSearch( arr , x ):
    # Finding block size to be jumped
    ind=[]
    n = len(arr)
    step = math.sqrt(n)

    # Finding the block where element is
    # present (if it is present)
    prev = 0
    while arr[int(min(step, n)-1)] < x:
        prev = step
        step += math.sqrt(n)
        if prev >= n:
            return -1

    # Doing a linear search for x in
    # block beginning with prev.
    while arr[int(prev)] < x:
        prev += 1

        # If we reached next block or end
        # of array, element is not present.
        if prev == min(step, n):
            return -1

    # If element is found
    if arr[int(prev)] == x:
        
        ind.append(int(prev))
    while prev!=n-1:
        if arr[int(prev)+1]==x:
          ind.append(int(prev)+1)
        prev=prev+1

    return ind
    if len(ind)==0:
      return -1

def main():
    arr = [ 0, 1, 3, 4, 4, 5, 8, 13, 22, 24, 55, 59, 122, 213, 422, 555 ]
    x = 4
    jumpSearch(arr, x)
    print("Number {} is at index {}".format(x,jumpSearch(arr,x)))

if __name__ == "__main__":
    main()
