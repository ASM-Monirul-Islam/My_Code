#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		bool yes = false;
		vector<int>v(3);
		for(int i=0; i<3; i++) {
			cin>>v[i];
		}
		sort(v.rbegin(), v.rend());
		for(int i=1; i<3; i++) {
			if(v[0]+v[i] >= 10) {
				yes = true;
				break;
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