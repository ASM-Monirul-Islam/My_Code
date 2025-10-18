#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	vector<int>v(3);
	cin>>t;
	while(t--) {
		for(int i=0; i<3; i++) {
			cin>>v[i];
		}
		sort(v.begin(), v.end());
		if(v[2]==v[0]+v[1]) {
			cout<<"YES"<<endl;
		}else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}