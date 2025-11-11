#include<bits/stdc++.h>
using namespace std;

long long missingSum(vector<long long>&coins) {
	sort(coins.begin(), coins.end());
	long long smallest=1;
	for(auto &i:coins) {
		if(i>smallest) break;
		smallest+=i;
	}
	return smallest;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	cin>>n;
	vector<long long>coins(n);
	for (long long i=0; i<n; i++) {
		cin>>coins[i];
	}
	long long ans = missingSum(coins);
	cout<<ans<<endl;
	return 0;
}