#include<bits/stdc++.h>
using namespace std;

bool same_parity(vector<int>&nums) {
	bool same = true;
	int rem = nums[0]%2;
	for(int i=1; i<nums.size(); i++) {
		if(nums[i]%2!=rem) return false;
	}
	return true;
}

int main() {
	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		vector<int>nums(n);
		for(int i=0; i<n; i++) {
			cin>>nums[i];
		}
		if(!same_parity(nums)) {
			sort(nums.begin(), nums.end());
		}
		for(auto &i:nums) {
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}