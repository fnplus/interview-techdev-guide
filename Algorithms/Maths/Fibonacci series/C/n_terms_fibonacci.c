#include <stdio.h>
int fibonacci(int n)
{
  if (n==1)
    return 1;
  if (n==2)
    return 1;
  return fibonacci(n-1) + fibonacci(n-2);
}
int main(void)
{
  int n;
  printf("enter the number of terms of the fibonacci series to be printed: ");
  scanf("%d",&n);
  for (int i=1;i<=n;i++)
    printf("%d ",fibonacci(i));
}
