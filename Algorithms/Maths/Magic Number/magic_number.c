#include<stdio.h>

void is_magic_number(int n)
{
    int sum = 0;

    // The loop stops only when n becomes 0
    // and sum is a single digit number.
    while (n > 0 || sum > 9)
    {
        if (n == 0) {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }

    if (sum == 1)
      printf("Magic Number!\n");
    else
      printf("Not a Magic Number!\n");
}

int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    is_magic_number(n);
    return 0;
}
