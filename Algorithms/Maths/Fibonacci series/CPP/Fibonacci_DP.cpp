#include <iostream>
using namespace std;

// Fibonacci Dynamic Programming approach
int fib(int n){
    int f[n+1];
    f[0] = 0, f[1] = 1;
    for(int i = 2; i <= n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

// Main Fnnction
int main(){
	int N;
	cout << "Enter the number:";
	cin >> N;
	cout << "Fibonacci number is: ";
	cout << fib(N) << endl;
	return 0;
}

