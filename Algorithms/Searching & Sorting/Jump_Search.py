import math

def jumpSearch( arr , x ):
    # Finding block size to be jumped
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
        return int(prev)

    return -1


arr = [ 0, 1, 3, 4, 4, 5, 8, 13, 22, 24, 55, 59, 122, 213, 422, 555 ]
x = 55

index = jumpSearch(arr, x)
print("Number is at index {}".format(index))

