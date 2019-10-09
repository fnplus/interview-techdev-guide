def bubble_sort(a):
    n = len(a)

    for i in range(n):
        # Last i elements are already in place
        for j in range(0, n - i - 1):
            # Traverse the array from 0 to n-i-1
            # Swap if the element found is greater than the next element
            if a[j] > a[j + 1]:
                a[j], a[j + 1] = a[j + 1], a[j]


if __name__ == '__main__':
    a = [64, 34, 25, 12, 22, 11, 90]
    bubble_sort(a)
    print("Sorted array is:")
    for i in range(len(a)):
        print("%d" % a[i])
