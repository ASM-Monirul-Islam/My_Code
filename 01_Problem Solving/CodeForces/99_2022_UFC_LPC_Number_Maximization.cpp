#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s = to_string(n);
	sort(s.rbegin(), s.rend());
	cout<<s<<endl;
	return 0;
}