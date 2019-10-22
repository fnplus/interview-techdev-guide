#include<iostream> 
using namespace std; 
  
bool isMagic(int n) 
{ 
    int sum = 0; 
      
    // Note that the loop continues 
    // if n is 0 and sum is non-zero. 
    // It stops when n becomes 0 and 
    // sum becomes single digit. 
    while (n > 0 || sum > 9) 
    { 
        if (n == 0) 
        { 
            n = sum; 
            sum = 0; 
        } 
        sum += n % 10; 
        n /= 10; 
    } 
      
    // Return true if sum becomes 1. 
    return (sum == 1); 
} 
   
// Driver code 
int main() 
{ 
    int n = 1234; 
    if (isMagic(n)) 
        cout << "Magic Number"; 
    else
        cout << "Not a magic Number"; 
    return 0; 
} 

