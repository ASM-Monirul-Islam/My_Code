#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>v(n+1);
	vector<int>p(n+1);
	for(int i=1; i<=n; i++) {
		cin>>v[i];
		p[v[i]]=i;
	}
	for(int i=1; i<=n; i++) {
		cout<<p[i]<<" ";
	}
	return 0;
}