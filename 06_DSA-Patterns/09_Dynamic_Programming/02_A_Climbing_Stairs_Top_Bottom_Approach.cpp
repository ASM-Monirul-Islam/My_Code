#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:

	int count(int i, int  n, vector<int>&dp) {
		if(i==n) return 1;
		if(i>n) return 0;
		if(dp[i] != -1) return dp[i];
		return dp[i] = count(i+1, n, dp)+count(i+2, n, dp);
	}

	int climbing_ways(int n) {
		vector<int>dp(n+2, -1);
		return count(0, n, dp);
	}
};

int main() {
	Solution obj;
	int n;
	cin>>n;
	int ways = obj.climbing_ways(n);
	cout<<ways<<endl;
	return 0;
}