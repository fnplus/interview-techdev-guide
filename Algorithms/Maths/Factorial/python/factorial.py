num = int(input("Enter a number: "))

factorial = 1

# check if the number is negative, positive or zero
if num < 0:
   print("Sorry, factorial does not exist for negative numbers")
elif num == 0:
   print("The factorial of 0 is 1")
else:
   for i in range(1,num + 1):
       factorial = factorial*i
   print("The factorial of",num,"is",factorial)
   
"""
Or you can directly use the math.factorial() in python

import math 
num = int(input("Enter a number: "))
print ("The factorial is ",math.factorial(num), end="") 
"""
