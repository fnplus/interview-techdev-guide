#include<stdio.h>
#include<conio.h>
#include<math.h>

int checking(char*,int);
void main()
    {
        int b,i;
        char *a;
        a=(char*)calloc(b,sizeof(char));
        printf("\nhow many digit binary you want to enter\n");
        scanf("%d",&b);

        printf("\nenter the binary number");
        fflush(stdin);
        gets(&a[0]);
        if(checking(a,b))
        {
            printf("\nthe given binary number after converting into decimal is a multiple of 3");
        }
        else
         printf("\nthe given binary number after converting into decimal is not a multiple of 3");
         getch();
        free(a);
    }
    int checking(char *a,int b)
    {
        int i,j=0,sum=0;

        for(i=b-1;i>=0;i--)
        {
            sum=sum+pow(2,j)*(int)*(a+i);
            j++;
        }
        return(sum%3==0);
    }
