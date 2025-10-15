#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		bool yes = false;
		if(s[0]=='a' or s[1]=='b' or s[2]=='c') {
			yes = true;
		}
		if(yes) {
			cout<<"YES"<<endl;
		}else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}