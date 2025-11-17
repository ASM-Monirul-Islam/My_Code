/*
Problem: Maximum Sum Subarray of Size K

Given an array of integers 'arr' and an integer 'k', your task is to find the
maximum possible sum of any contiguous subarray of size 'k'.

Input Format:
- The first line contains an integer 'n' — the number of elements in the array.
- The second line contains 'n' space-separated integers — the elements of the array.
- The third line contains an integer 'k' — the size of the subarray.

Output Format:
Print a single integer — the maximum sum of any subarray of size 'k'.

Constraints:
1 ≤ n ≤ 10^5
1 ≤ k ≤ n
-10^4 ≤ arr[i] ≤ 10^4

Example:
Input:
7
2 1 5 1 3 2 6
3

Output:
11

Explanation:
The subarray [5, 1, 3] has the maximum sum = 9 among all subarrays of size 3.
*/


#include<bits/stdc++.h>
using namespace std;

int sumofKsubArr(vector<int>&arr, int k) {
	int sum=0, maxSum=0;
	for(int i=0; i<k; i++) {
		sum+=arr[i];
	}
	maxSum=sum;
	for(int i=k; i<arr.size(); i++) {
		sum+=arr[i]-arr[i-k];
		maxSum=max(maxSum, sum);
	}
	return maxSum;
}

int main() {
	int n, k;
	cin>>n;
	vector<int>arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cin>>k;

	int ans = sumofKsubArr(arr, k);
	cout<<ans<<endl;
	return 0;
}