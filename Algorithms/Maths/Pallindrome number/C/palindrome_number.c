#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int total_digits(int number)
{
    int count = 0;
    while(number!=0)
    {
        count+=1;
        number = number / 10;
    }
    return count;
}
bool is_palindrome(int number)
{
    int temp_number = number;
    int length_number = total_digits(temp_number);
    int rev_number = 0;
    int rem;
    while(temp_number!=0)
    {
        rem = temp_number % 10;
        rev_number = rev_number + rem*(pow(10,(length_number-1)));
        temp_number = temp_number / 10;
        length_number = length_number - 1;
    }
    if(rev_number == number)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int number1 = 202;
    if(is_palindrome(number1))
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    
    int number2 = 203;
    if(is_palindrome(number2))
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    int number3 = 4;
    if(is_palindrome(number3))
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}