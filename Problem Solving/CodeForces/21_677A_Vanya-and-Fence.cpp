#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, h, width=0;
	cin>>n>>h;
	vector<int>v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
		if(v[i]<=h) {
			width++;
		} else if(v[i]>h) {
			width+=2;
		}
	}
	cout<<width<<endl;
	return 0;
}