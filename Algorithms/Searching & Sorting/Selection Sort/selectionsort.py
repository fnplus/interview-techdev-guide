def selectionsort(arr):
	i=0
	while(i<len(arr)):
		#find index of minimum number between index i and index n-1 where n=len(arr)
		num,ind=arr[i],i
		for j in range(i+1,len(arr)):
			if(arr[j]<num):
				num=arr[j]
				ind=j
		#swap number at ind with number at i
		temp=arr[i]
		arr[i]=arr[ind]
		arr[ind]=temp
		i+=1
	return arr

def main():
	arr = [9,7,4,3,1,5,3,6,7,0]
	sorted_arr = selectionsort(arr)
	print(sorted_arr)
if __name__ == "__main__":
	main()