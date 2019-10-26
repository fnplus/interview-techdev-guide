
def find(arr,i):
  if i>len(arr)-1:
    return 0
  elif i==len(arr)-1:
    return arr[i]
  else:
    if vis[i]==1:
      return dp[i]
    else:
      ans=0
      j=2
      while j<len(arr):    
        ans=max(ans,arr[i]+find(arr,i+j))
        j+=1
    dp[i]=ans
    vis[i]=1
    return ans
arr=list(map(int,input("Enter The Integers Separated By Space:").split()))
ans=0
dp=[0]*10000
vis=[0]*10000
for i in range(0,len(arr)):
  ans=max(ans,find(arr,i))
print("The maximum sum of alternate numbers is:{}".format(ans))
