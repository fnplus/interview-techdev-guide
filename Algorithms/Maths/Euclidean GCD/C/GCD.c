#include <stdio.h> 
  
//Recursive version of GCD
int gcd_recursive(int num1, int num2) 
{ 
    if (num2 == 0) 
        return num1; 
    return gcd_recursive(num2, num1%num2); 
}

//Non Recursive version of GCD
int gcd_non_recursive(int num1, int num2)
{
    if(num1 < num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    while(num2!=0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}
  
// Entry point
int main() 
{ 
    int a = 10, b = 15; 
    printf("Recursive-GCD(%d, %d) = %d\n", a, b, gcd_recursive(a, b)); 
    printf("Non-Recurivse-GCD(%d, %d) = %d\n", a, b, gcd_non_recursive(a, b));
    a = 35, b = 10; 
    printf("Recursive-GCD(%d, %d) = %d\n", a, b, gcd_recursive(a, b)); 
    printf("Non-Recurivse-GCD(%d, %d) = %d\n", a, b, gcd_non_recursive(a, b));
    a = 31, b = 2; 
    printf("Recursive-GCD(%d, %d) = %d\n", a, b, gcd_recursive(a, b)); 
    printf("Non-Recurivse-GCD(%d, %d) = %d\n", a, b, gcd_non_recursive(a, b));
    a = 10, b = 0;
    printf("Recursive-GCD(%d, %d) = %d\n", a, b, gcd_recursive(a, b)); 
    printf("Non-Recurivse-GCD(%d, %d) = %d\n", a, b, gcd_non_recursive(a, b));
    return 0; 
} 