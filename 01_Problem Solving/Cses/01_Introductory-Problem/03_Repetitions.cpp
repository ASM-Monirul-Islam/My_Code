#include<bits/stdc++.h>
using namespace std;

int repeatitions(string s) {
	if(s.size()==1) return 1;
	int l=0, r=1, repeat=1, longRepeat=0;
	while(r<=s.size()) {
		if(s[r]==s[l]) {
			repeat++;
		}else {
			longRepeat=max(repeat, longRepeat);
			l=r;
			repeat=1;
		}
		r++;
	}
	return longRepeat;
}

int main() {
	string s;
	cin>>s;
	cout<<repeatitions(s)<<endl;
	return 0;
}