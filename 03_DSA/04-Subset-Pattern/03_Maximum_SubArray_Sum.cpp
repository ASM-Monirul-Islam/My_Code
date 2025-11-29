/*

QUESTION: Given an array of n integers, your task is to find the maximum
sum of values in a contiguous, nonempty subarray.

💡Intuition (Kadane’s Algorithm)
We move through the array while maintaining two variables:
currentSum → best sum ending at the current index
maxSum → best overall sum seen so far

Formula: 
	currentSum = max(x, currentSum + x)
	maxSum = max(maxSum, currentSum)
*/

#include<bits/stdc++.h>
using namespace std;

int solution(vector<int>&nums) {
	int current, maxSum;
	current=maxSum=nums[0];
	for(int i=1; i<nums.size(); i++) {
		current=max(nums[i], nums[i]+current);
		maxSum=max(current, maxSum);
	}
	return maxSum;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0; i<n; i++) {
		cin>>nums[i];
	}
	int ans = solution(nums);
	cout<<ans<<endl;
	return 0;
}