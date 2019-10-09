#Defining function to perform Binary Search(RECURSIVE)
def binarySearch (arr, l, r, x): 
  
    #Checking whether List has atleast one element 
    if r >= l: 
        #Calculating middle element
        mid = l + (r - l)/2
        mid = int(mid)
  
        # If element is present at the middle itself 
        if arr[mid] == x: 
            return mid 
          
        # If element is smaller than mid, then it should be in left sub-array 
        elif arr[mid] > x: 
            return binarySearch(arr, l, mid-1, x) 
  
        # Else the element can only be present in right subarray 
        else: 
            return binarySearch(arr, mid + 1, r, x) 
  
    else: 
        # Element is not present in the array 
        return -1
  
# Test array 
arr = [ 2, 3, 4, 10, 11 ]
print("\nAvailable List is {}" .format(arr))
x = input("\nEnter element to be searched :")
x = int(x)
  
# Function call 
result = binarySearch(arr, 0, len(arr)-1, x) 
  
if result != -1: 
    print("Element is present at index: {}" .format(result)) 
else: 
    print("Element is not present in array")
