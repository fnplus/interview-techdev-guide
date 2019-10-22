def FibonacciSearch(arr, key):
    fib2 = 0
    fib1 = 1
    fib = fib1 + fib2
    while (fib < len(arr)):
        fib2 = fib1
        fib1 = fib
        fib = fib1 + fib2
    index = -1
    while (fib > 1):
        i = min(index + fib2, (len(arr)-1))
        if (arr[i] < key):
            fib = fib1
            fib1 = fib2
            fib2 = fib - fib1
            index = i
        elif (arr[i] > key):
            fib = fib2
            fib1 = fib1 - fib2
            fib2 = fib - fib1
        else :
            return i
    if(fib1 and index < (len(arr)-1) and arr[index+1] == key):
        return index+1
    return -1


key= 15
arr = [5, 10, 15, 20, 25, 30, 35]
ans = FibonacciSearch(arr, key)
print(ans)
if (ans):
    print("Found at "+ str(ans+1) +" position")
else:
    print("Not Found")

