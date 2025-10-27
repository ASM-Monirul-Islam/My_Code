/*
Problem: Kth Largest Element in an Array

You are given an array of integers 'v' of size 'n', and an integer 'k'.
Your task is to find the kth largest element in the array.

Input Format:
- The first line contains an integer 'n' — the number of elements in the array.
- The second line contains 'n' space-separated integers — the elements of the array.
- The third line contains an integer 'k'.

Output Format:
Print a single integer — the kth largest element in the array.

Constraints:
1 ≤ k ≤ n ≤ 10^5
-10^9 ≤ v[i] ≤ 10^9

Example:
Input:
6
7 10 4 3 20 15
3

Output:
10

Explanation:
After sorting the array in descending order [20, 15, 10, 7, 4, 3],
the 3rd largest element is 10.
*/


#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&nums, int n, int k) {
	priority_queue< int, vector<int>, greater<int>>pq;
	for(int i=0; i<k; i++) {
		pq.push(nums[i]);
	}
	for(int i=k; i<n; i++) {
		if(nums[i]>pq.top()) {
			pq.pop();
			pq.push(nums[i]);
		}
	}
	return pq.top();
}

int main() {
	int n, k;
	cin>>n;
	vector<int>nums(n);
	for(int i=0; i<n; i++) {
		cin>>nums[i];
	}
	cin>>k;
	int ans = solve(nums, n, k);
	cout<<ans<<endl;
	return 0;
}