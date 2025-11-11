#include<bits/stdc++.h>
using namespace std;

vector<int>Solution(vector<pair<int, int>>nums, int targetSum) {
	sort(nums.begin(), nums.end());
	int n = nums.size();
	int start=0, end=n-1, sum;
	while(start<end) {
		sum=nums[start].first+nums[end].first;
		if(sum==targetSum) {
			return {min(nums[start].second, nums[end].second), max(nums[start].second, nums[end].second)};
		}else if(sum<targetSum) start++;
		else end--;
	}
	return {-1};
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, targetSum, val;
	cin>>n>>targetSum;
	vector<pair<int, int>>nums;
	for(int i=0; i<n; i++) {
		cin>>val;
		nums.emplace_back(val, i+1);
	}
	vector<int>ans = Solution(nums, targetSum);
	if(ans.size()!=1) {
		for(auto &i:ans) {
			cout<<i<<" ";
		}
	}else cout<<"IMPOSSIBLE"<<endl;
	return 0;
}