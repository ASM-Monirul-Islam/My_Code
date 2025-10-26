/*
Problem Statement:
------------------
A child is running up a staircase with 'n' steps and can hop either 1 step, 2 steps, or 3 steps at a time.
Your task is to determine the total number of distinct ways the child can reach the top of the staircase.

Example:
---------
Input: 4
Output: 7

Explanation:
There are 7 possible ways to reach the 4th step:
(1,1,1,1), (1,1,2), (1,2,1), (2,1,1), (2,2), (1,3), (3,1)

Approach:
----------
This solution uses a Top-Down Dynamic Programming (Memoization) approach.
We recursively calculate the number of ways to reach step 'n' by summing up:
- ways(n-1): taking a single step
- ways(n-2): taking a double step
- ways(n-3): taking a triple step

The computed results are stored in a DP array to avoid redundant calculations.
*/



#include<bits/stdc++.h>
using namespace std;

int count(int n, vector<int>&dp) {
	if(n==0) return 1;
	if(n<0) return 0;
	if(dp[n] != -1) return dp[n];
	return dp[n] = count(n-1, dp) + count(n-2, dp) + count(n-3, dp);
}

int solve(int n) {
	vector<int>dp(n+2, -1);
	return count(n, dp);
}

int main() {
	int n;
	cin>>n;
	int ways = solve(n);
	cout<<ways<<endl;
	return 0;
}