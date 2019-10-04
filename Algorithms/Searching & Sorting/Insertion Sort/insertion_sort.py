def insertion_sort(arr):
        
    for i in range(len(arr)):
        cursor = arr[i]
        pos = i
        
        while pos > 0 and arr[pos - 1] > cursor:
            arr[pos] = arr[pos - 1]
            pos = pos - 1
        arr[pos] = cursor

    return arr


a = insertion_sort([3, 2, 5, 4, 1, 0])
print(a)
