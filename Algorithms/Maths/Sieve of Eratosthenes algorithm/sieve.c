#include <stdio.h>
#include <stdlib.h>

typedef enum Boolean {FALSE = 0, TRUE = 1} Boolean;

int main (int argc, char **argv)
{
  int N = 0, i = 0, j = 0;
  int* numbers = NULL;
  Boolean *sieve;
  N = strtol(argv[1], NULL, 10);

  if (N < 2)  printf("\n No prime numbers \n\n");
  else
    {
      sieve = calloc(N -1, sizeof(Boolean));
      numbers = malloc( (N -1)*sizeof(int) );

      for (i=2; i<=N; i++)
        numbers[i-2] = i;

      for( i=0; i <= (N/2); i++ )
        for(j=i+1; j<=N -2; j++)
          if( (numbers[j] % numbers[i]) == 0 )
            sieve[j] = TRUE;

      for(i=0; i<N -1; i++)
        if(!sieve[i])
          printf(" %d ", numbers[i]);
      printf("\n\n");
    }
  return 0;
}
