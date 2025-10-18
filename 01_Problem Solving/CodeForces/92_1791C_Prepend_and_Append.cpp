#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	string s;
	cin>>t;
	while(t--) {
		cin>>n;
		cin>>s;
		int i=0, count=0;
		while(i<n) {
			if((s[i]=='0' and s[n-1]=='1') or (s[i]=='1' and s[n-1]=='0')) {
				i++;
				n--;
				count+=2;
			}else {
				break;
			}
		}
		if(count==0) {
			cout<<s.length()<<endl;
		}else {
			cout<<s.length()-count<<endl;
		}
	}
	return 0;
}