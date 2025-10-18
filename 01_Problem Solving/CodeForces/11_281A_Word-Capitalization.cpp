#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	if(islower(s.front())){
		s.front()=toupper(s[0]);
	}
	cout<<s<<endl;
	return 0;
}