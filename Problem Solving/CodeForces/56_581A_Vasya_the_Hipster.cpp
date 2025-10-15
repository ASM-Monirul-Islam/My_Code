#include<bits/stdc++.h>
using namespace std;

/*
	a = red socks
	b = blue socks

		a red one on the left foot
		a blue one on the right foot
*/

int main() {
	int a, b, diff_socks, same_socks, socks_left;
	cin>>a>>b;
	diff_socks = min(a, b);
	socks_left = abs(a-b);
	if(socks_left>1) {
		same_socks = socks_left/2;
	}else {
		same_socks = 0;
	}
	cout<<diff_socks<<" "<<same_socks<<endl;
	return 0;
}