#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, s=0;
	cin>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
	}
	int maxVal = *max_element(v.begin(), v.end());
	for(int i:v) {
		s+=(maxVal-i);
	}
	cout<<s<<endl;
	return 0;
}