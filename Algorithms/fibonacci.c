#include <stdio.h>
void print_fibonacci(int num)
{
    int a = 0 , b = 1;
    printf("%d\n%d",a,b);
    num = num - 2;
    while(num > 0)
    {
        num = num - 1;
        sum = a + b;
        a = b;
        b = sum;
        printf("%d\n",sum);

    }
}

void main(){
     clrscr();
     int n;
     printf("Enter the number of terms of Fibonacci series to be printed");
     scanf("%d",&n);

     
}