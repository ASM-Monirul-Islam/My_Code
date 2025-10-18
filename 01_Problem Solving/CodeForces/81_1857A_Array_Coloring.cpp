#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		vector<int>v(n);
		for(int i=0; i<n; i++) {
			cin>>v[i];
		}
		int sum = accumulate(v.begin(), v.end(), 0);
		if(sum%2==0) {
			cout<<"YES"<<endl;
		}else {
			cout<<"NO"<<endl;
		}
		v.clear();
	}
	return 0;
}