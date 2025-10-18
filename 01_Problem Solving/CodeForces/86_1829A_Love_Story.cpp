#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, count;
	string s1 = "codeforces";
	string s2;
	cin>>t;
	while(t--) {
		count=0;
		cin>>s2;
		for(int i=0; i<s2.length(); i++) {
			if(s1[i]!=s2[i]) {
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}