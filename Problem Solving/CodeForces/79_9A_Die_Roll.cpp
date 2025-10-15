#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if(a%b==0) {
		return b;
	}
	return gcd(b, a%b);
}

int main() {
	int y, w, dot_sample;
	cin>>y>>w;
	dot_sample = 6-max(y, w)+1;
	int gcd_val = gcd(dot_sample, 6);
	int a = dot_sample/gcd_val;
	int b = 6/gcd_val;
	cout<<a<<"/"<<b<<endl;
	return 0;
}