# Python program for implementation of Insertion Sort 

# Function to do insertion sort 
def insertionSort(arr): 

	# Traverse through 1 to len(arr) 
	for i in range(1, len(arr)): 

		key = arr[i] 

		# Move elements of arr[0..i-1], that are 
		# greater than key, to one position ahead 
		# of their current position 
		j = i-1
		while j >=0 and key < arr[j] : 
				arr[j+1] = arr[j] 
				j -= 1
		arr[j+1] = key 


# Driver code to test above
size = int(input("\nEnter list size\n"))
li = []
for i in range(0,size):
    item = int(input("Enter item {} of the list" .format(i)))
    li.append(item)
    
print("\nInput list to be sorted is {}" .format(li))
insertionSort(li) 
print ("\nSorted array is {}" .format(li))  
