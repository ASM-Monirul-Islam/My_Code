#include<bits/stdc++.h>
using namespace std;

int main() {
	int calories=0;
	vector<int>v(4);
	string s;
	for(int i=0; i<4; i++) {
		cin>>v[i];
	}
	cin>>s;
	for(char ch:s) {
		calories+=(v[(ch-'0')-1]);
	}
	cout<<calories<<endl;
	return 0;
}