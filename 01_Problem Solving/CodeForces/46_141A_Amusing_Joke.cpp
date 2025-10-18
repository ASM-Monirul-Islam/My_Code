#include<bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2, s3, s;
	getline(cin, s1); //guest's name
	getline(cin, s2); //name of the residence host 
	getline(cin, s3); // letters in a pile that were found at the door in the morning
	s=s1+s2;
	sort(s.begin(), s.end());
	sort(s3.begin(), s3.end());
	if(s==s3) {
		cout<<"YES"<<endl;
	}else {
		cout<<"NO"<<endl;
	}
	return 0;
}