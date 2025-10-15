#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
	}
	vector<int>temp;
	for(int i=0; i<n; i++) {
		if(count(v.begin(), v.end(), v[i])>1) {
			v[i]=INT_MAX;
		}else {
			temp.push_back(v[i]);
		}
	}
	cout<<temp.size()<<endl;
	for(auto i:temp) {
		cout<<i<<" ";
	}
	return 0;
}