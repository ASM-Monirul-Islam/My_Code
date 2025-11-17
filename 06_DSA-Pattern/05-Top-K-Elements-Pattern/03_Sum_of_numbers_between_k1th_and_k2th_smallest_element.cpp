/*
Problem: Sum of Elements Between K1th and K2th Smallest Elements

You are given an array of integers 'nums' of size 'n', and two integers 'k1' and 'k2'.
Your task is to find the **sum of all elements** that lie **strictly between** the
k1th smallest and k2th smallest elements in the array.

Input Format:
- The first line contains an integer 'n' — the number of elements in the array.
- The second line contains 'n' space-separated integers — the elements of the array.
- The third line contains two integers 'k1' and 'k2'.

Output Format:
Print a single integer — the sum of all elements between the k1th and k2th smallest elements.

Constraints:
1 ≤ n ≤ 10^5
1 ≤ k1 < k2 ≤ n
-10^9 ≤ nums[i] ≤ 10^9

Example:
Input:
7
20 8 22 4 12 10 14
3 6

Output:
26

Explanation:
After sorting the array: [4, 8, 10, 12, 14, 20, 22]
- 3rd smallest element = 10
- 6th smallest element = 20
Elements between them are [12, 14]
Sum = 12 + 14 = 26
*/


#include<bits/stdc++.h>
using namespace std;

int sum(vector<int>&nums, int k1, int k2) {
	int n = nums.size();
	priority_queue<int>p1;
	priority_queue<int>p2;
	for(int i=0; i<k1; i++) {
		p1.push(nums[i]);
	}
	for(int i=0; i<k2-1; i++) {
		p2.push(nums[i]);
	}
	for(int i=k1; i<n; i++) {
		if(nums[i]<p1.top()) {
			p1.pop();
			p1.push(nums[i]);
		}
	}
	for(int i=k2; i<n; i++) {
		if(nums[i]<p2.top()) {
			p2.pop();
			p2.push(nums[i]);
		}
	}
	int sum1=0, sum2=0;
	while(!p1.empty()) {
		sum1+=p1.top();
		p1.pop();
	}
	while(!p2.empty()) {
		sum2+=p2.top();
		p2.pop();
	}
	return sum2-sum1;
}

int main() {
	int n, k1, k2;
	cin>>n;
	vector<int>nums(n);
	for(int i=0; i<n; i++) {
		cin>>nums[i];
	}
	cin>>k1>>k2;
	int ans = sum(nums, k1, k2);
	cout<<ans<<endl;
	return 0;
}