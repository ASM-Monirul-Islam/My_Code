#include<bits/stdc++.h>
using namespace std;

bool your_name(string s, string t) {
	if(s.size() != t.size()) return false;
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	if(s!=t) return false;
	return true;
}

int main() {
	int q,n;
	string s, t;
	cin>>q;
	while(q--) {
		cin>>n;
		cin>>s>>t;
		bool yes = your_name(s, t);
		if(yes) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}