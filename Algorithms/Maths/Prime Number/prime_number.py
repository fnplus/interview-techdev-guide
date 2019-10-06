k = input("Enter a Number to check for for prime : ")
num=int(k)
i=2
flag = 0
if (num == 2) :
    print ("Prime Number")
elif num < 2 :
    print ("Not a Prime Number and must enter a positive real Number greater than 2")
else :
    while(i <= num/2) :
        if num % i == 0 :
            flag =1
            break
        i = i+1
    if flag == 0:    
        print ("Prime Number")
    else:
        print ("Not a Prime Number")
