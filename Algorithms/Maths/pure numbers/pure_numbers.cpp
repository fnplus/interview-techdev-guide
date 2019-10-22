// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to print the first n pure numbers 
void nPureNumbers(int n) 
{ 

	queue<string> q; 
	vector<string> ans; 

	// Push the starting two elements 
	q.push("44"); 
	q.push("55"); 
	int total = 2; 

	// While generated numbers are less than n 
	while (ans.size() < n) { 

		string temp = q.front(); 
		q.pop(); 
		ans.push_back(temp); 

		q.push("4" + temp + "4"); 
		q.push("5" + temp + "5"); 
	} 

	// Sorting strings based on their value 
	sort(ans.begin(), ans.end(), [](auto s, auto s2) { 
		if (s.size() == s2.size()) 
			return s < s2; 
		else
			return s.size() < s2.size(); 
	}); 

	// Print first n pure numbers 
	for (auto i : ans) { 
		cout << i << " "; 
	} 
} 

// Driver code 
int main() 
{ 
	int n = 4; 

	nPureNumbers(n); 

	return 0; 
} 
