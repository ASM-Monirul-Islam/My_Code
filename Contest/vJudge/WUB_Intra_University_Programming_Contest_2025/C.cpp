#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k, count=0;
	cin>>n>>k;
	vector<int>v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
	}
	for(int i=0; i<n; i++) {
		if(v[i]!=0 and v[i]>=v[k-1]) {
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}