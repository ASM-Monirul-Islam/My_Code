#include<bits/stdc++.h>
using namespace std;



int main() {

	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0; i<n; i++) {
		cin>>nums[i];
	}

	sort(nums.begin(), nums.end());
    for(int i=0; i<n; i++) {
        int cnt = count(nums.begin(), nums.end(), nums[i]);
		if(cnt>1) {

			nums.erase(remove(nums.begin(), nums.end(), nums[i]), nums.end());
			i--;
			n-=cnt;
		}
		for(auto j:nums) {
			cout<<j<<" ";
		}
		cout<<endl;
    }
}


