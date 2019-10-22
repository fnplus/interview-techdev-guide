#include<stdio.h>
#include<string.h>

void main()
{
    int status=1;
    char a[1000];
    printf("Enter The String\n");
    gets(&a[0]);
    int j,i=0;
    int count=0;
    while(i<=strlen(a))
    {
        status=0;
        count=1;
        j=i+1;
        while(j<=strlen(a))
        {
            if(a[i]==a[j])
            {
               count+=1;
            }
            else
            {
                printf("%d",count);
                printf("%c",a[i]);
                status=1;
                i+=count;
                break;
            }
            j+=1;
        }
        if(status!=1)
        {
            i+=1;
        }
    }

}
