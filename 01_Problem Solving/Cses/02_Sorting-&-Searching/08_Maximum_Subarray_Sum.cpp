#include<bits/stdc++.h>
using namespace std;

long long maxSubSum(vector<long long>&nums) {
	long long current, maxSum;
	current=maxSum=nums[0];
	for(long long i=1; i<nums.size(); i++) {
		current=max(nums[i], nums[i]+current);
		maxSum=max(current, maxSum);
	}
	return maxSum;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	cin>>n;
	vector<long long>nums(n);
	for(long long i=0; i<n; i++)
		cin>>nums[i];
	long long ans = maxSubSum(nums);
	cout<<ans<<endl;
	return 0;
}