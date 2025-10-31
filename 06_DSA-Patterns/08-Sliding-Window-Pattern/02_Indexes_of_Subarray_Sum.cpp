/*
Given an array arr[] containing only non-negative integers, your task is to find a 
continuous subarray (a contiguous sequence of elements) whose sum equals a specified 
value target. You need to return the 1-based indices of the leftmost and rightmost 
elements of this subarray. You need to find the first subarray whose sum is equal to 
the target.

Note: If no such array is possible then, return [-1].

Input: arr[] = [1, 2, 3, 7, 5], target = 12
Output: [2, 4]
Explanation: The sum of elements from 2nd to 4th position is 12.

Input: arr[] = [5, 3, 4], target = 2
Output: [-1]
Explanation: There is no subarray with sum 2.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int>sumofSubArr(vector<int>&arr, int target) {
	int i=0,j=-1, sum=0;
	int n = arr.size();
	while(i<n and j<n) {
		if(sum==target and (i+1)!=(j+1)) {
			return {i+1, j+1};
		}else if(sum<target) {
			sum+=arr[++j];
		}else {
			sum-=arr[i++];
		}
	}
	return {-1};
}

int main() {
	int n, target;
	cin>>n;
	vector<int>arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cin>>target;
	vector<int>ans = sumofSubArr(arr, target);
	cout<<"[";
	for(int i=0; i<ans.size(); i++) {
		cout<<ans[i];
		if(i<ans.size()-1) cout<<",";
	}
	cout<<"]"<<endl;
	return 0;
}