import math
if __name__=="__main__":
        

        n=int(input())

        Prime=[]

        for i in range(0,n+1):
            Prime.append(True)
        Prime[0]=False
        Prime[1]=False

        for i in range(2,int(math.sqrt(n)+1)):
            if Prime[i]==True:
                j=2
                while i*j<=n:
                    
                    Prime[i*j]=False
                    j=j+1
        s=0
        for i in range(2,n+1):
            if Prime[i]==True:
                print(i)
           
