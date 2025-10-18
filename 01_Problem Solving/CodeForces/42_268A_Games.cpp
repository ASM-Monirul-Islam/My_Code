#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, h, g, games=0;
	vector<pair<int, int>>v;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>h>>g;
		v.emplace_back(h,g);
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(v[i].first == v[j].second) {
				games++;
			}
		}
	}
	cout<<games<<endl;
	return 0;
}