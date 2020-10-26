//TwoSum
//Given a list of numbers and a number k, return indices of two numbers from the list add up to k.

#include <iostream>
#include <vector>
#include<map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map <int, int> mp;
    vector<int> result;
    int rem;

    for(int i = 0; i < nums.size(); i++) {
        rem = target - nums[i];
        if(mp.find(rem) != mp.end() && mp.find(rem)->second != i) {
            result.push_back(mp.find(rem)->second);
            result.push_back(i);

            return result;
        }
        mp.insert(pair<int, int>(nums[i], i));
    }
    return result;
}

// Input format: n (number of terms in array), target
// 			  	 nums(array of length n)
// Output: Indices of numbers that give the required target sum

int main() {
	int t;
	cin >> t;

	while(t--) {
		vector<int> nums;
		int target, n;
		cin >> n >> target;
		nums.resize(n);
		for(int i = 0; i < n; i++) {
			cin >> nums[i];
		}
		vector<int> result = twoSum(nums, target);

		if(result.size() == 2) {
			cout << result[0] << " " << result[1] << "\n";
		}
		else 
			cout << "No result found" <<"\n";
	}
}