#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, count=1;
	cin>>n;
	vector<int>m(n);
	for(int i=0; i<n; i++) {
		cin>>m[i];
	}
	for(int i=0; i<n-1; i++) {
		if(m[i]!=m[i+1]) {
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}