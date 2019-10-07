#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;

// Declare an unordered set as dictionary
unordered_set <string> dict;

bool wordBreak(string &s, int i, vector<int> &dp){
    
    if(i == s.length())	return 1;
    
	if(dp[i] != -1)	return dp[i];
    
	for(int j = i + 1; j <= s.length(); ++j){
        if(dict.find(s.substr(i, j-i)) != dict.end()){

            if(wordBreak(s, j, dp)){
                return dp[i] = 1;
            }
        }
    }
    return dp[i]=0;
}

int main() {
	int t;
	//Enter the number of test cases
	cin >> t;
	while(t--){
	    int n;
	    string temp, s;
	    //Enter the number of collection of strings in dictionary
		cin>>n;
		// Insert elements in the dictionary
	    dict.clear();
	    while(n--){
	        cin >> temp;
	        dict.insert(temp);
	    }
		// Input String 
	    cin >> s;
		// Make an vector(dp) to apply DP
	    vector <int> dp(s.length(), -1);
	    cout << wordBreak(s, 0, dp) << endl;
	}
	return 0;
}
