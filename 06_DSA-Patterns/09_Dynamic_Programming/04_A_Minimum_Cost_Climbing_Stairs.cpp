/*
Problem Statement:
------------------
You are given an integer array 'cost' where cost[i] is the cost of the i-th step on a staircase.
Once you pay the cost at step i, you can climb either one or two steps.

You can start climbing from either step 0 or step 1.
Your task is to find the minimum cost required to reach the top of the floor (beyond the last step).

Example 1:
-----------
Input: cost = [10, 15, 20]
Output: 15
Explanation: 
Start at step 1 (cost = 15) and climb two steps to reach the top.
The minimum total cost is 15.

Example 2:
-----------
Input: cost = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
Output: 6
Explanation:
Start at step 0 → 2 → 3 → 4 → 6 → 7 → 9 (total cost = 1 + 1 + 1 + 1 + 1 + 1 = 6)
*/


#include<bits/stdc++.h>
using namespace std;

int min_cost(int n, vector<int>&cost, vector<int>&dp) {
	if(n<=1) return 0;
	if(dp[n] != -1) return dp[n];
	return dp[n] = min(cost[n-1]+min_cost(n-1, cost, dp), cost[n-2]+min_cost(n-2, cost, dp));
}

int solve(vector<int>&cost) {
	int n = cost.size();
	vector<int>dp(n+2, -1);
	return min_cost(n, cost, dp);
}

int main() {
	int n;
	cin>>n;
	vector<int>cost(n);
	for(int i=0; i<n; i++) {
		cin>>cost[i];
	}
	int minCost = solve(cost);
	cout<<minCost<<endl;
	return 0;
}