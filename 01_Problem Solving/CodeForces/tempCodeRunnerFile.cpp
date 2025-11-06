#include<bits/stdc++.h>
using namespace std;

bool correct(string s) {
	return (s.size()==5) and  (s=="Timur" or s=="miurT" or s=="Trumi" or s=="mriTu");
}

int main() {
	int t, n;
	cin>>t;
	cin.ignore();
	while(t--) {
		string s;
		cin>>n;
		cin>>s;
		if(correct(s)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}