//Author: Amar Gwari         Date: 06/10/19        Time: 20:08 
#include<stdio.h>
int main() 
{
	long long int N,i=0,a=0,b,z;
	printf("Please Enter The Number Of Your Choice\n");
	scanf("%lld",&N);
	for(i=1;i<=N/2;i++)
	{
		if(N%i == 0)
		{
			a+=i;
		}
	}

	if(a == N)
		printf("\nThe Number Is Perfect!\n");
	else
		printf("\nThe Number Is Not Perfect\n");
	return 0;
}





