def min_heapify(arr,n,i):
    """This function will perform max heapify on elements level-wise
        or wil choose largest among it's left,right child and itself.
        Parameters:
            arr: List of integers.
            n: Length of list arr.
            i: index of element 
        Returns:
            None
    """
    smallest = i
    left = 2*i + 1
    right = 2*i + 2

    if(left<n and arr[left]<arr[smallest]):
        smallest = left
    if(right<n and arr[right]<arr[smallest]):
        smallest = right

    if(i!=smallest):
        arr[i],arr[smallest] = arr[smallest],arr[i]

        min_heapify(arr,n,smallest)

        
def max_heapify(arr,n,i):
    """This function will perform max heapify on elements level-wise
        or wil choose largest among it's left,right child and itself.
        Parameters:
            arr: List of integers.
            n: Length of list arr.
            i: index of element
        Returns:
            None
    """
    largest = i
    left = 2*i + 1
    right = 2*i + 2

    if(left < n and arr[left] > arr[largest]):
        largest = left
    if(right < n and arr[right] > arr[largest]):
        largest = right
    if(i!=largest):
        arr[i],arr[largest] = arr[largest],arr[i]
        max_heapify(arr,n,largest)

        
def min_build_heap(arr,n):
    """This function will build min heap.
        Parameters:
            arr: List of integers.
            n: Length of list arr.
        Returns:
            None
    """
    for i in range(len(arr)//2):
        min_heapify(arr,n,i)
    

def max_build_heap(arr,n):
    """This function will build max heap.
        Parameters:
            arr: List of integers.
            n: Length of list arr.
    """
    for i in range(len(arr)//2):
        max_heapify(arr,n,i)

        
def main():
    arr = [8,2,5,6,9]
    n = len(arr)
    print("List Before min heapify =>",arr)
    min_build_heap(arr,n)
    print("List after min heapify=>",arr)
    arr = [8,2,5,6,9]
    print("List Before min heapify =>",arr)
    max_build_heap(arr,n)
    print("List after min heapify=>",arr)
    
if __name__ == "__main__":
    main()

