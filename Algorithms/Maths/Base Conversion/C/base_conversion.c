#include<stdio.h>
#include<math.h>

long long int to_decimal(long long int n, int b){
  long long int dec = 0;
  long long int i = 1;
  while(n > 0){
    dec += (n % 10) * i;
    i *= b;
    n /= 10;
  }
  return dec;
}

long long int to_base(long long int dec, int b){
  long long int m = 0;
  long long int i = 1;
  while(dec > 0){
    m += (dec % b) * i;
    i *= 10;
    dec /= b;
  }
  return m;
}

int main(){
  long long int n;
  int x,y;
  printf("Enter number and base that it is in:\n");
  scanf("%lld %d", &n, &x);
  printf("Enter base to convert to:\n");
  scanf("%d", &y);
  printf("%lld \n", to_base(to_decimal(n, x), y));
  return 0;
}
