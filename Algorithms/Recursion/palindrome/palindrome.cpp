#include <bits/stdc++.h> 
using namespace std; 
  

int rev(int n, int temp) 
{ 
    
    if (n == 0) 
        return temp; 
  
    // stores the reverse of a number 
    temp = (temp * 10) + (n % 10); 
    return rev(n / 10, temp); 
} 
  

int main() 
{ 
  
    cout<<"Enter the Number=  ";    
    cin>>n;    
    int temp = rev(n, 0); 
    if (temp == n) 
        cout << "yes" << endl; 
    else
        cout << "no" << endl; 
    return 0; 
} 
