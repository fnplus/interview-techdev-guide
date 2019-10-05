#include<stdio.h>

void quicksort(int num[25],int f,int l){
   int i, j, pivot, temp;

   if(f<l){
      pivot=f;
      i=f;
      j=l;

      while(i<j){
         while(num[i]<=num[pivot]&&i<l)
            i++;
         while(num[j]>num[pivot])
            j--;
         if(i<j){
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
         }
      }

      temp=num[pivot];
      num[pivot]=num[j];
      num[j]=temp;
      quicksort(num,f,j-1);
      quicksort(num,j+1,l);

   }
}

void main(){
   int i, count, num[25];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&num[i]);

   quicksort(num,0,count-1);     //function call

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",num[i]);

}
