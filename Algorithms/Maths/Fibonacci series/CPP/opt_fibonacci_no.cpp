#include<bits/stdc++.h>
using namespace std;

typedef long long ll;	
const int S = 2;
const int MOD = 1000000000+7;
const int MODQ = 1000000000+7-1;

struct mat_t {
	int m[S][S];
};

// Function to calculate matrix multiplication
mat_t mat_mult(mat_t& a, mat_t& b) {
	mat_t c;

	for(int i=0; i<S; i++) 
		for(int j=0; j<S; j++)
			c.m[i][j] = 0;

	for(int i=0; i<S; i++) {
		for(int k=0; k<S; k++) {
			for(int j=0; j<S; j++) {
				c.m[i][j] = (c.m[i][j]+ ll(a.m[i][k])*b.m[k][j] % MODQ) % MODQ;
			}
		}		
	}

	return c;	
}


// Calculation Matrix Power in O(log(n)) ie A^n(where A is matrix)
// same as  exponentiation power
mat_t mat_pow(mat_t a, int n) { 		
	mat_t w;

	for(int i=0; i<S; i++) {
		for(int j=0; j<S; j++)
			w.m[i][j] = i==j;
	}


	while(n) {
		if(n&1) w = mat_mult(w, a);
		a = mat_mult(a, a);
		n/=2;
	}

	return w;
}


int main() {
		int n; cin >> n;


		mat_t m;
		m.m[0][0] = m.m[0][1] = m.m[1][0] = 1;
		m.m[1][1] = 0;

		m = mat_pow(m, n);
		cout << m.m[0][1] << endl;
}