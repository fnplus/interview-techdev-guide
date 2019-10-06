// Author: Amar Gwari   		Date: 07/10/19			Time: 00:49 
// this program will show the first 'n' elements of the fibonacci sequence   
#include <stdio.h>
int main()
{
	long long int first = 0, second = 1, next = 0, n,i;
	printf("Enter the number of elements you wanna see:\n");
	scanf("%lld", &n);
	printf("\n");
	//now 'n' is known (^o^), now writing code to actually find fibonacci sequence...
	if(i == 0)
		printf("0\n");
	if(i>=0)
	{ printf("1 ");
		for(i=1;i<n;i++)
		{ next = second	+ first;
			printf("%lld ",next);
			first = second;
			second = next;
		}
		printf("\n");
	}
	//fibonacci sequence isprinted \(>.<)/
	return 0;
}    






