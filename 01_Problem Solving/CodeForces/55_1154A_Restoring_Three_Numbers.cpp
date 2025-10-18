#include<bits/stdc++.h>
using namespace std;

/*
a+b 
a+c 
b+c 
a+b+c 
*/

int main() {
	int a, b, c;
	vector<int>v(4);
	for(int i=0; i<4; i++) {
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	a = v[3]-v[0];
	b = v[3]-v[1];
	c = v[3]-v[2];
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}