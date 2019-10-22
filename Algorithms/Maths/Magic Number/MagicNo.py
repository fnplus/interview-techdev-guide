import math
 
num = int(input("Enter a Number \n"))
digitCount = int(math.log10(num))+1
sumOfDigits = 0
 
temp = num #copying num
 
#calculating sum of digits of temp(i.e num) until
#sumOfDigits is a single digit
while( digitCount > 1):
 
  sumOfDigits = 0
 
  while(temp > 0):
    sumOfDigits += temp%10
    temp = temp//10
 
  temp = sumOfDigits
  #count the digits of sumOfDigits
  digitCount = int(math.log10(sumOfDigits))+1
   
    
#check whether sumOfDigits == 1
if(sumOfDigits == 1):
    print("Magic number")
else:
    print("Not a magic number")

