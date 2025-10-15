#include<bits/stdc++.h>
using namespace std;

int moves(vector<int>&v) {
	int count=0;
	for(int i=0; i<v.size(); i++) {
		if((i%2)!=(v[i]%2)) {
			count++;
		}
	}
	return count;
}

int main() {
	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		vector<int>v(n);
		for(int i=0; i<n; i++) {
			cin>>v[i];
		}
		int count = moves(v);
		if(count==0) {
			cout<<0<<endl;
		}else if(count%2==0) {
			cout<<count/2<<endl;
		}else cout<<-1<<endl;
	}
	
	return 0;
}