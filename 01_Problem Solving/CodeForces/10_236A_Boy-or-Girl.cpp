#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	int n=str.length();
	vector<char>v(n);
	for(int i=0; i<n; i++) {
		v[i]=str[i];
	}
	sort(v.begin(), v.end());
	auto i=unique(v.begin(), v.end());
	v.erase(i, v.end());
	if(v.size()%2==0){
		cout<<"CHAT WITH HER!"<<endl;
	} else {
		cout<<"IGNORE HIM!"<<endl;
	}
	return 0;
}