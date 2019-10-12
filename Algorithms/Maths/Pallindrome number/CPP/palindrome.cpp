#include<bits/stdc++.h>
using namespace std;
bool palindrome(int x)
{
	int n=x;//n acts as temporary variable for storing x
	int sum=0;//sum stores the inverted number
	while(n>0)
	{
		sum=sum*10+n%10;
		n/=10;
	}
	return sum==x?1:0;
}
int main()
{
cout<<palindrome(1991);
}
