arr=list(map(int,input("enter the array of integers separated by space").split()))
max_val=arr[0]
global_val=arr[0]
for i in range(1,len(arr)):
  max_val=max(arr[i],max_val+arr[i])
  if max_val>global_val:
    global_val=max_val

print("max sum subarray of a given array:{}".format(global_val))
