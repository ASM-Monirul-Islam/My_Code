#include<bits/stdc++.h>
using namespace std;

long long sanity(vector<long long>&nums, long long s, long long k) {
	long long i=0, j=0, count=0;
	for(auto &i:nums) {
		if(i==0){
			count++;
			if(count==k) {
				count=0;
				s++;
			}
		}else{
			s-=i;
			count=0;
		}
	}
	return s;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n, s, k;
	cin>>n>>s>>k;
	vector<long long>nums(n);
	for (long long i=0; i<n; i++) {
		cin>>nums[i];
	}
	cout<<sanity(nums, s, k)<<endl;
	return 0;
}