#include <stdio.h>

int factorial(int n)
{
	int result;

	if (0 == n) {
		result = 1;
	} else {
		result = n * factorial(n - 1);
	}

	return result;
}

int main(int argc, char **argv)
{
	printf("The factorial of 3 is: %d\n", factorial(3));

	return 0;
}
