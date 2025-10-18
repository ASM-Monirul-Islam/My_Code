#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, count, long_space;
	cin>>t;
	while(t--) {
		cin>>n;
		vector<int>v(n);
		for(int i=0; i<n; i++) {
			cin>>v[i];
		}
		vector<int>space;
		count=0;
		for(int i=0; i<n; i++) {
			if(v[i]==0) {
				count++;
			}else if(v[i]==1) {
				space.push_back(count);
				count=0;
			}
			if(i==(n-1)) {
				space.push_back(count);
			}
		}
		if(space.empty()) {
			long_space=0;
		}else {
			long_space = *max_element(space.begin(), space.end());
		}
		cout<<long_space<<endl;
		space.clear();
		v.clear();
	}
	return 0;
}