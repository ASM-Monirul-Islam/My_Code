#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string a, b;
	cin>>n;
	while(n--) {
		cin>>a>>b;
		char ch = a[0];
		a[0]=b[0];
		b[0]=ch;
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}