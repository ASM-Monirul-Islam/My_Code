#include<bits/stdc++.h>
using namespace std;

void lowerCase(string s, int n){
	for(int i=0; i<n; i++) {
		s[i]=tolower(s[i]);
	}
	cout<<s<<endl;
}

void upperCase(string s, int n){
	for(int i=0; i<n; i++) {
		s[i]=toupper(s[i]);
	}
	cout<<s<<endl;
}

int main() {
	string s;
	cin>>s;
	int n=s.length(), up_c=0, low_c=0;
	for(int i=0; i<n; i++) {
		if(isupper(s[i])){
			up_c++;
		} else if(islower(s[i])) {
			low_c++;
		}
	}
	if(up_c<=low_c){
		lowerCase(s,n);
	} else{
		upperCase(s,n);
	}
	return 0;
}