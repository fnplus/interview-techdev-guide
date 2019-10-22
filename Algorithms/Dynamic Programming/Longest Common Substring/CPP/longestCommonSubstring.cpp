/* Dynamic Programming C++ implementation of Longest commong substring problem */
#include<bits/stdc++.h> 
using namespace std; 

int lcs(string X, string Y, int m, int n ) { 
	int LCSuff[m + 1][n + 1]; 
	int result = 0;
	
	for (int i = 0; i <= m; i++) { 
		for (int j = 0; j <= n; j++) { 
      if (i == 0 || j == 0) 
        LCSuff[i][j] = 0;  
      else if (X[i-1] == Y[j-1]) { 
        LCSuff[i][j] = LCSuff[i-1][j-1] + 1; 
        result = max(result, LCSuff[i][j]); 
      } 
      else LCSuff[i][j] = 0; 
    }
	} 
		
	return result;
} 

// main function
int main(){ 

  string X,Y;
  cout<<"enter first string: ";
  cin>>X;
  cout<<"\nenter second string: ";
  cin>>Y;
	
	int m = X.size(); 
	int n = Y.size(); 
	
	cout << "Length of LCS is "
		<< lcs( X, Y, m, n ); 
	
	return 0; 
} 