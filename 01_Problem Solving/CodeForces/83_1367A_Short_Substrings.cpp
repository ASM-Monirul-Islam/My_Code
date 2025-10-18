#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	string s;
	cin>>t;
	while(t--) {
		cin>>s;
		for(int i=1; i<s.length()-1; i++) {
			if(s[i]==s[i+1]) {
				s.erase(s.begin()+i+1);
			}
		}
		cout<<s<<endl;
	}
	return 0;
}