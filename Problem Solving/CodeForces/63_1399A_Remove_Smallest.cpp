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
		sort(v.begin(), v.end());
		bool one_element = true;
		for(int i=1; i<n; i++) {
			if(abs(v[i]-v[i-1])>1) {
				one_element = false;
				break;
			}
		}
		if(one_element) {
			cout<<"YES"<<endl;
		}else {
			cout<<"NO"<<endl;
		}
		v.clear();
	}
	return 0;
}