
def partition(a,l,h):
  pivot=a[h]
  i=l-1
  for j in range(l,h):
    if a[j]>pivot:
      i+=1
      temp=a[i]
      a[i]=a[j]
      a[j]=temp

  temp=a[i+1]
  a[i+1]=a[h]
  a[h]=temp

  return i+1

def quicksort(a,l,h):
  if(l<h):
    pivot=partition(a,l,h)
    quicksort(a,l,pivot-1)
    quicksort(a,pivot+1,h)


m=int(input("enter the number of cookie"))
n=int(input("enter the number of child"))
print("m>n")
cookie=[]*(m)
child=[]*(n)
print("enter the cookie size")
for i in range(0,m):
  print("enter the size of cookie:{}".format(i+1))
  cookie.append(int(input()))
print("enter the greed factor")
for j in range(0,n):
  print("enter the greed factor of child:{}".format(j+1))
  child.append(int(input()))

quicksort(cookie,0,m-1)
quicksort(child,0,n-1)
count=0
print("The result is:")
for k in range(0,n):
  if(child[k]<=cookie[k]):
    print("greed={},cookie size={}".format(child[k],cookie[k])) 
    count+=1
print("Maximum content size={}".format(count))
  
    
  


  
