/* C Program to Find Perfect Number in a given interval eg. 1 to 1000 */

#include <stdio.h>

int main()
{
  int Number, Sum, i, Minimum, Maximum;

  printf("\n Please Enter the Minimum & Maximum Values\n");
  scanf("%d %d", &Minimum, &Maximum);

  printf("Perfect Numbers Between %d and %d are:\n", Minimum, Maximum);
  for(Number=Minimum; Number<=Maximum; Number++)
   {
     for(i = 1, Sum =0 ; i < Number ; i++)   
      {   
        if(Number % i == 0)   
          Sum = Sum + i ;   
      }   

     if (Sum == Number)   
       printf(" %d  ", Number) ;   
   }

 return 0;
}
