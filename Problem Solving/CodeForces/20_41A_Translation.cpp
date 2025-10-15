#include<bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2;
	cin>>s1>>s2;
	int n1=s1.length();
	int n2=s2.length();
	if(n1!=n2){
		cout<<"NO"<<endl;
		return 0;
	}
	for(int i=0, j=n1-1; i<n1, j>=0; i++, j--) {
		if(s1[i]!=s2[j]) {
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}