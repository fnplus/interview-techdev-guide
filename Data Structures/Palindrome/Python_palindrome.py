# function to check string is  
# palindrome or not 
def isPalindrome(s): 
      
    # Using predefined function to  
    # reverse to string print(s) 
    rev = ''.join(reversed(s)) 
  
    # Checking if both string are  
    # equal or not 
    if (s == rev): 
        return True
    return False
  
# main function 
s = str(input("Enter a string: "))
ans = isPalindrome(s) 
  
if (ans): 
    print("Yes") 
else: 
    print("No") 