a=list(map(int,input("Enter The Array Separated by space that would indicate the maximum distance that can be covered from current position").split()))
jmp=len(a)*[100]
source=len(a)*[0]
jmp[0]=0
for i in range(0,len(a)-1):
  current=i
  for j in range(1,a[current]+1):
    if j<len(a) and current+j<=len(a)-1:
      if(jmp[current+j]>jmp[current]+1 ):
        jmp[current+j]=jmp[current]+1
        source[current+j]=current

print("Minimum Number Of Jumps Needed To Reach The Destination Is {}".format(jmp[len(a)-1]))

print("The Number Of Jumps Required To Reach Corresponding Index Position:{}".format(jmp))

print("The Jump That Has Been Taken From Source Index To Reach Corresponding Index:{}".format(source))
