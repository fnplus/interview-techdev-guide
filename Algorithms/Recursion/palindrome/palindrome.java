import java.io.*; 
  
class Palindrome 
{ 

static int rev(int n, int temp) 
{ 
    if (n == 0) 
        return temp; 
  
    // stores the reverse of a number 
    temp = (temp * 10) + (n % 10); 
    return rev(n / 10, temp); 
} 
  

public static void main (String[] args)  
{ 
    int n = 101; 
    int temp = rev(n, 0); 
      
    if (temp == n) 
        System.out.println("yes"); 
    else
        System.out.println("no" ); 
} 


} 
  
