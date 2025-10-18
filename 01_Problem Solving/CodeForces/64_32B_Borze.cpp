#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	vector<int>v;
	getline(cin, s);
	for(int i=0; i<s.length(); i++) {
		if(s[i]=='.') {
			v.push_back(0);
		}else if(s[i]=='-'){
			if(s[i+1]=='.') {
				v.push_back(1);
			}else if(s[i+1]=='-') {
				v.push_back(2);
			}
			i++;
		}
	}
	for(auto i:v) {
		cout<<i;
	}
	return 0;
}