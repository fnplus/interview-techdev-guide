def heapify(arr, n, i):
    """This is to max heapify
        Parameters:
            arr(list): List of integers
            n(int): Length of list
            i(int): Root element
    """
    largest = i  
    left = 2 * i + 1     
    right = 2 * i + 2     
   
    if left < n and arr[i] < arr[left]: 
        largest = left 
  
    if right < n and arr[largest] < arr[right]: 
        largest = right 
  
    if largest != i: 
        arr[i],arr[largest] = arr[largest],arr[i] # swap 
        heapify(arr, n, largest) 

 
def heapSort(arr):
    """This function sort the integers.
        Parameters:
            arr(list): List of integers
        Returns:
            None
    """
    n = len(arr) 
  
    # Build a maxheap. 
    for i in range(n, -1, -1): 
        heapify(arr, n, i) 
  
    # One by one extract elements 
    for i in range(n-1, 0, -1): 
        arr[i], arr[0] = arr[0], arr[i] # swap 
        heapify(arr, i, 0) 


def main():
    arr = [ 12, 11, 13, 5, 6, 7] 
    heapSort(arr) 
    print("Sorted array is",arr)

    
if __name__ == "__main__":
    main()
