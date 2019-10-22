#include<stdio.h>
int top=-1;
int arr[20];
main()
{
    signed int a,b,remain,max,min,s;
    printf("enter the two number whose gcd is to be found using euclid algorithm\n");
    scanf("%d%d",&a,&b);
    if(a<0)
        a=-1*a;
    if(b<0)
        b=-1*b;
    max=(a>b)?a:b;
    min=(a<b)?a:b;
    remain=max%min;
    s=max/min;
    printf("%d = %d *%d + %d",max,min,s,remain);
    stack(remain);
    stack(min);
    while(remain>0)
    {
        max=pop();
        min=pop();
        remain=max%min;
        s=max/min;
        printf("\n%d = %d *%d + %d",max,min,s,remain);
        stack(remain);
        stack(min);
    }
    printf("\ngcd of two function is %d",pop());
    getch();

}
void stack(int value)
{
    top=top+1;
    arr[top]=value;
}
int pop()
{
    int k=top;
     top--;
    return(arr[k]);
}
