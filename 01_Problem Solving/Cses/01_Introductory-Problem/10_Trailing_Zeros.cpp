#include<bits/stdc++.h>
using namespace std;

long long fact(long long n, vector<long long>&dp) {
	if(n<1) return 1;
	if(dp[n]!=-1) return dp[n];
	return dp[n]=n*fact(n-1, dp);
}

int trailing_zeros(long long n) {
	int count=0;
	while(true) {
		if(n%10==0) count++;
		else break;
		n/=10;
	}
	return count;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	cin>>n;
	vector<long long>dp(n+1, -1);
	cout<<trailing_zeros(fact(n, dp))<<endl;
	return 0;
}