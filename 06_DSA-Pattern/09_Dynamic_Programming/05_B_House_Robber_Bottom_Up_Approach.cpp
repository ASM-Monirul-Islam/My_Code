/*
Problem Statement:
------------------
You are a professional robber planning to rob houses along a street. 
Each house has a certain amount of money stored in it, represented by the array 'nums'. 
However, adjacent houses have security systems connected such that if two adjacent houses 
are robbed on the same night, the police will be alerted.

Your task is to determine the maximum amount of money you can rob tonight without 
alerting the police.

Example 1:
-----------
Input:
n = 4
nums = [2, 7, 9, 3]

Output:
11

Explanation:
Rob house 1 (money = 2), skip house 2, rob house 3 (money = 9), 
and skip house 4 (money = 3). 
Total = 2 + 9 = 11.

Constraints:
-------------
1 <= n <= 1000
0 <= nums[i] <= 10^4
*/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int rob(vector<int>&nums) {
		int n = nums.size();
		if(n==1) return nums[0];
		if(n==2) return max(nums[0], nums[1]);
		int curr, prev1 = max(nums[1], nums[0]), prev2 = nums[0];
		for(int i=2; i<n; i++) {
			curr = max(nums[i]+prev2, prev1);
			prev2=prev1;
			prev1=curr;
		}
		return curr;
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
    int robbed = obj.rob(nums);
    cout<<robbed<<endl;
    return 0;
}