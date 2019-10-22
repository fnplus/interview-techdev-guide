if __name__=="__main__":
    t=int(input())

    while t!=0:
        s=list(input())
        ar=[]
        c=0
        for i in range(0,len(s)):
            if s[i]==")":
                if len(ar)!=0:
                        
                    if ar[-1]=="(":
                        c=c+2
                    ar.pop(len(ar)-1)
                    
            else:
                ar.append(s[i])
            #print(ar)
        print(c)
        t=t-1
