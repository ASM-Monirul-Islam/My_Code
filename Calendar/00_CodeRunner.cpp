#include<bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define eb emplace_back
#define F first
#define S second
#define pub push_back
#define pob pop_back
#define ll long long
#define min_heap int, vector<int>, greater<int>
#define min_heap_pair pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>
#define vout(x) for(int i=0; i<x.size(); i++) cout << x[i] << " ";

int solution(int n, vector<int>&dp) {
	if(n==0) return 1;
	if(n<0) return 0;
	if(dp[n]!=-1) return dp[n];
	return dp[n] = solution(n-1, dp) + solution(n-2, dp) + solution(n-3, dp);
}

int ways(int n) {
	vector<int>dp(n+1, -1);
	return solution(n, dp);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;
	cout<<ways(n)<<endl;
	return 0;
}