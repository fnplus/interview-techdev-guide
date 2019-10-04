#include <stdio.h>
int main(){
    int first = 0;
    int second = 1;
    int next = 0;
    int num;
    printf("Number of element: \n");
    scanf("%d", &num);
    int i;
    for (i = 1; i <= num; i++){
        if (i <= 1)
            next = i;
        else{
        next = first + second;
        first = second;
        second = next;
        //printf("%d\n", next);
        }
        }
    printf("%d term of Fibbonacci is %d", num , next);
    return 0;
    }