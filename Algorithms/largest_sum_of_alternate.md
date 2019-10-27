Here In this algorithm the array is given and we are suppose to findout the maximum sum of subarray,but the rule is that the element should not be adjacent to the element which has already been considered.

example:
input:a=[1,0,3,8,1]
output:9
9 is given by a[0]+a[3]

if we consider,a[0] then as per the given constraint of this problem we cant consider a[1] because  a[0] has been already considered.
in this way we have to pick up all the possibilities and consider the one which gives maximum sum and print the sum

similarly
input:a=[0,8,-1]
output=8

input:a=[1,4,4,5,-2,14,120,10,-30]
output:129
given by a[1]+a[3]+a[6]