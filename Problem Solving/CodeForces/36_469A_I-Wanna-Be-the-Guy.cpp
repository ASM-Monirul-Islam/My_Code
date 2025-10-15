#include<bits/stdc++.h>
using namespace std;

bool passed(vector<int>&v, int n) {
	if(v.size()==n) {
		return true;
	}
	return false;
}


int main() {
	int n, p, q;
	cin>>n;
	cin>>p;
	vector<int>v1(p);
	for(int i=0; i<p; i++) {
		cin>>v1[i];
	}
	cin>>q;
	vector<int>v2(q);
	for(int i=0; i<q; i++) {
		cin>>v2[i];
	}
	vector<int>v3(v1);
	v3.insert(v3.end(), v2.begin(), v2.end());
	sort(v3.begin(), v3.end());
	auto it = unique(v3.begin(), v3.end());
	v3.erase(it, v3.end());
	if(v3.size()==n) {
		cout<<"I become the guy."<<endl;
	}else {
		cout<<"Oh, my keyboard!"<<endl;
	}
	return 0;
}