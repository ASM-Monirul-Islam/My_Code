/*
Description:
Subset-Sum DP with Backtracking: This approach solves the Partition Equal Subset Sum problem 
by first using dynamic programming to check if a subset with sum equal to half of the total 
array exists. A 2D DP table dp[i][j] records whether sum j can be formed using the first i 
numbers. After filling the table, if dp[n][target] is true, we backtrack from it to retrieve 
one subset that sums to the target. For example, given nums = [1, 5, 11, 5], the total sum is 22, 
target is 11, and backtracking can produce the subset [1, 5, 5], with the remaining [11] forming 
the other subset. This method efficiently finds a valid partition and the actual subset.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        if(totalSum%2!=0) return false;
        int target = totalSum/2;

        vector<bool>dp(target+1, false);
        dp[0]=true;

        for(auto &n:nums) {
            for(int i=target; i>=n; i--) {
                dp[i]= dp[i] or dp[i-n];
            }
        }
        return dp[target];
    }
};

int main() {
	Solution obj;
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0; i<n; i++) {
		cin>>nums[i];
	}
	bool possible = obj.canPartition(nums);
	if(possible) cout<<"True"<<endl;
	else cout<<"False"<<endl;
	return 0;
}