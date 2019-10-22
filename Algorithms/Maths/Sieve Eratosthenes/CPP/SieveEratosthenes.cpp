#include <bits/stdc++.h>

using namespace std;

bool IsPrime[10000001];
void sieve_erathostenes(){
	memset(IsPrime,true,sizeof IsPrime);
	IsPrime[1]=false;
	long i=2,j;
	while(i<=10000){
		j=2;
		if(IsPrime[i]){
			while(i*j<=10000000){
				IsPrime[i*j]=false;
				j++;
			}
		}
		i++;	
	}
}

int main(){
	int val;
	sieve_erathostenes();
	
	cin >> val; 
    cout << ((IsPrime[val])?"Prime":"Not Prime")<<endl ;
	return 0;
}
