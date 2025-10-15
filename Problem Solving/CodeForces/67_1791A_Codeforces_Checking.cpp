#include<bits/stdc++.h>
using namespace std;

int main() {
	string s = "codeforces";
	int t;
	char c;
	cin>>t;
	while(t--) {
		bool exist = false;
		cin>>c;
		for(char ch: s) {
			if(ch==c) {
				exist = true;
				break;
			}
		}
		if(exist) {
			cout<<"YES"<<endl;
		}else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}