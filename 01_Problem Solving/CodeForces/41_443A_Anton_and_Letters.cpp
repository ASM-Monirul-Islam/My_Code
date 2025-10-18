#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	set<char>st;
	getline(cin,s);
	for(char ch:s) {
		if(isalpha(ch)) {
			st.insert(ch);
		}
	}
	cout<<st.size()<<endl;
	return 0;
}