#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	cin>>n>>s;
	vector<char>v(n);
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(int i=0; i<n; i++) {
		v[i]=s[i];
	}
	sort(v.begin(), v.end());
	auto i = unique(v.begin(), v.end());
	v.erase(i, v.end());
	if((v.size())==26){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
	return 0;
}