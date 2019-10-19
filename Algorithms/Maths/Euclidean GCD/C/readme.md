GCD of two numbers is the largest number that divides both of them. A simple way to find GCD is to factorize both numbers and multiply common factors.

![GCD](https://www.geeksforgeeks.org/wp-content/uploads/GCD-1.jpg)
#
# Basic Euclidean Algorithm for GCD Here we used stack data structure  and euclid algorithm to compute gcd 
The algorithm is based on below facts.



##Here euclidean formuala for calculation of  gcd has been used.a=bq+r,where a is the largest number,b is the smallest number q is the quotient obtained by dividing a with b whereas r is the remainder ie a%b.
##in first step we calculate remainder(obtained by largest no%smallest no)  and the quotient (obtained by doing largest no/smallest no )then we push remainder and smallest no in the stack.
##we carry out above steps in loop till the remaider becomes zero,in the beginning of the loop popping operation is performed at the end pushing is done. 