'''
    Input: 'programming is fun'
    Output: 'fun is programming'
'''
#Method 1
s = 'programming is fun'
l = s.split()
l.reverse()
s = ' '.join(l)
print(s)


#Method 2
s = 'programming is fun'
s = s[::-1]
ln=len(s)
a=''
for i in s:
    if i == ' ':
        x = a[::-1]
        s = s.replace(a,x)
        a = ''
    else:
        a  += i

x=a[::-1]
s=s.replace(a,x)
print(s)

#Method 3
def reverse(s): 
  str = "" 
  for i in s: 
    str = i + str
  return str
  
s = "programming is fun"
  
print ("The original string  is : ",end="") 
print (s) 
  
print ("The reversed string(using loops) is : ",end="") 
print (reverse(s)) 
