t=int(input())
while t!=0:
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    s=list(set(l))
    
    for i in range(0,len(s)):
        if l.count(s[i])%2!=0:
            print(s[i],end=" ")
    print()            
    t=t-1
