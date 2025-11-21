#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
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

bool fair_division(vector<ll>&arr) {
	ll n = arr.size();
	ll totalSum = accumulate(arr.begin(), arr.end(), 0);
	if(totalSum&1) return false;
	ll targetSum = totalSum/2;
	vector<bool>dp(targetSum+1, false);
	dp[0]=true;
	for(auto &n: arr) {
		for(ll i=targetSum; i>=n; i--) {
			dp[i]=dp[i] or dp[i-n];
		}
	}
	return dp[targetSum];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		vector<ll>arr(n);
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		cout<<(fair_division(arr) ? "YES" : "NO")<<endl;
	}
	return 0;
}