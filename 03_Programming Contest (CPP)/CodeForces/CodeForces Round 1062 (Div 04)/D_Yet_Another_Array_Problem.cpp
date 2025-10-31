#include<bits/stdc++.h>
using namespace std;

int gcd(long long a, long long b) {
	if(a%b==0) return b;
	return gcd(b, a%b);
}

int solve(vector<long long>&nums) {
	sort(nums.begin(), nums.end());
	auto i = unique(nums.begin(), nums.end());
	nums.erase(i, nums.end());

	long long n = 2;

	while(n<=100000000000000000) {
		for(int i=0; i<nums.size(); i++) {
			if(gcd(nums[i], n)==1) return n;
		}
		n++;
	}
	return -1;
}

int main() {
	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		vector<long long>nums(n);
		for(int i=0; i<n; i++) {
			cin>>nums[i];
		}
		int ans = solve(nums);
		cout<<ans<<endl;
	}
	return 0;
}