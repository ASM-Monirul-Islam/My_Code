/*
LeetCode Problem 35: Search Insert Position

📝 Problem Statement:
Given a sorted array of distinct integers `nums` and a target value `target`,
return the index if the target is found. If not, return the index where it 
would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

🔹 Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2

🔹 Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1

🔹 Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4

🔸 Constraints:
• 1 <= nums.length <= 10^4
• -10^4 <= nums[i] <= 10^4
• nums contains distinct values sorted in ascending order.
• -10^4 <= target <= 10^4
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]>=target) {
                return i;
            }
        }
        return nums.size();
    }
};


int main() {
	Solution obj;
	int n, target;
	cin>>n;
	vector<int>nums(n);
	for(int i=0; i<n; i++) {
		cin>>nums[i];
	}
	cin>>target;
	int ans = obj.searchInsert(nums, target);
	cout<<ans<<endl;
	return 0;
}