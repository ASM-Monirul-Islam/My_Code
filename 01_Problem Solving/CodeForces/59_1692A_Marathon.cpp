#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, infront;
	cin>>t;
	vector<int>v(4);
	while(t--) {
		infront = 0;
		for(int i=0; i<4; i++) {
			cin>>v[i];
		}
		for(int i=1; i<4; i++) {
			if(v[i]>v[0]) {
				infront++;
			}
		}
		cout<<infront<<endl;
		v.clear();
	}
	return 0;
}