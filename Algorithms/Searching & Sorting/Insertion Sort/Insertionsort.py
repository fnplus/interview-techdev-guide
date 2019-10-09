arr = [5,14,18,6,21]
n= len(arr)
i = 1
while (i<=n-1):
  value = arr[i]
  position = i
 
  while (position>0 and arr[position-1]>value):
    arr[position] = arr[position-1]
    position = position -1 
 
  i = i+1	
  arr[position] = value
 
 
for i in arr:
  print i,
