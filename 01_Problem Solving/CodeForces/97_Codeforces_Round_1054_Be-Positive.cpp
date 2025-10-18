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
		int a = count(v.begin(), v.end(), 0);
		int b = count(v.begin(), v.end(), -1);

		int operation = 0;
		if(a>0) {
			operation+=a;
		}
		if(b>0 and b%2!=0) {
			operation+=2;
		}
		cout<<operation<<endl;
	}
	return 0;
}