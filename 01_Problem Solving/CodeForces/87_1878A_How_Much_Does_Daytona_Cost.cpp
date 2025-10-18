#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k;
	cin>>t;
	while(t--) {
		bool yes = false;
		cin>>n>>k;
		vector<int>v(n);
		for(int i=0; i<n; i++) {
			cin>>v[i];
			if(v[i]==k) {
				yes = true;
			}
		}
		if(yes) {
			cout<<"YES"<<endl;
		}else {
			cout<<"NO"<<endl;
		}

	}
	return 0;
}