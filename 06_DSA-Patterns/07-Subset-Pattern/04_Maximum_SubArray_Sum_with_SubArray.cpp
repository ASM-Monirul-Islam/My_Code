/*
QUESTION: Given an array of n integers, your task is to find the maximum
sum of values in a contiguous, nonempty subarray and also print the subarray.

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

void solution(vector<int>&nums, int &start, int &end, int &maxSum) {
	int current=0, tempStart=0;
	for(int i=0; i<nums.size(); i++) {
		current+=nums[i];
		if(current>maxSum) {
			maxSum=current;
			start=tempStart;
			end=i;
		}
		if(current<0) {
			current=0;
			tempStart=i+1;
		}
	}
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
	int start=0, end=0, maxSum=INT_MIN;
	solution(nums, start, end, maxSum);
	cout<<maxSum<<endl;
	for(int i=start; i<=end; i++) {
		cout<<nums[i]<<" ";
	}
	cout<<endl;
	return 0;
}