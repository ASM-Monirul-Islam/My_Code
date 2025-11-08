#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
	ch=tolower(ch);
	return ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u';
}

int main() {
	int idx;
	string s;
	cin>>s;
	int n = s.size()-1;
	for(int i=n; i>=0; i--) {
		if(isVowel(s[i])) {
			idx=i;
			break;
		}
	}
	s.erase(idx+1, n-idx);
	s.append("ntry");
	cout<<s<<endl;
	return 0;
}