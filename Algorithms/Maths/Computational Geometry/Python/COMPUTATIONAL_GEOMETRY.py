import numpy as np

def DIRECTION(pi,pj,pk):
    a=np.subtract(pk,pi)
    b=np.subtract(pj,pi)
    return np.cross(a,b)

def on_segment(pi,pj,pk):
    pi=list(pi)
    pj=list(pj)
    p=[]
    p.append(pi)
    p.append(pj)
    
    P=list(zip(*p))

    
    if min(P[0])<=pk[0]<=max(P[0]) and  min(P[1])<=pk[1]<=max(P[1]):
        return True
    return False 
    


if __name__=="__main__":
    p1=np.array(list(map(int,input("ENTER (X1,Y1) of LINE SEGMENT 1: ").split())))
    p2=np.array(list(map(int,input("ENTER (X2,Y2) of LINE SEGMENT 1: ").split())))
    p3=np.array(list(map(int,input("ENTER (X3,Y3) of LINE SEGMENT 2: ").split())))
    p4=np.array(list(map(int,input("ENTER (X4,Y4) of LINE SEGMENT 2: ").split())))

    d1=DIRECTION(p3,p4,p1)
    d2=DIRECTION(p3,p4,p2)
    d3=DIRECTION(p1,p2,p3)
    d4=DIRECTION(p1,p2,p4)

    if ((d1>0 and d2<0) or (d1<0 and d2>0)) and ((d3>0 and d4<0) or (d3<0 and d4>0)):
        print("YES")
    elif d1==0 and on_segment(p3,p4,p1):
        print("YES")
    elif d2==0 and on_segment(p3,p4,p2):
        print("YES")
    elif d3==0 and on_segment(p1,p2,p3):
        print("YES")
    elif d4==0 and on_segment(p1,p2,p4):
        print("YES")
    else:
        print("NO")
   
