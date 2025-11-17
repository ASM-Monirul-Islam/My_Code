#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:

	int count(int n, vector<int>&dp) {
		if(n<=2) return n;
		if(dp[n] != -1) return dp[n];
		return dp[n] = count(n-1, dp) + count(n-2, dp);
	}

	int climbing_ways(int n) {
		vector<int>dp(n+1, -1);
		return count(n, dp);
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
