#include <iostream.h>
#include <conio.h>

int is_perfect_num(int num)
{
    int temp = num;
    int sum = 0;
    while(num >0)
    {
        int r = num /10;
        sum = sum + (r*r);

    }
    if(sum == temp)
        return 1;
    else
        return 0;
        
}

void main(){
     clrscr();
     int n;
     cout<<"Enter a number";
     cin>>n;
     int res = is_perfect_num(n);
     if(res == 1)
        cout<<"Perfect number";
    else
        cout<<"Not a perfect number"
     getch();
}