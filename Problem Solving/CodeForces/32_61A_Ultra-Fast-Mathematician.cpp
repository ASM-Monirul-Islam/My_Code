#include<bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2;
	cin>>s1>>s2;
	vector<int>v;
	for(int i=0; i<s1.length(); i++) {
		if(s1[i]==s2[i]) {
			v.push_back(0);
		} else {
			v.push_back(1);
		}
	}
	for(auto i:v) {
		cout<<i;
	}
	return 0;
}