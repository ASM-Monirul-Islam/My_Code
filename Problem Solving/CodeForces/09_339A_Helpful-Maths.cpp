#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	vector<char>arr;
	for(int i=0; i<s.length(); i++) {
		if(isdigit(s[i])) {
			arr.push_back(s[i]);
		}
	}
	sort(arr.begin(), arr.end());
	int n=0;
	for(int i=0; i<s.length(); i++) {
		if(i%2==0) {
			cout<<arr[n];
			n++;
		} else {
			cout<<"+";
		}
	}
	return 0;
}