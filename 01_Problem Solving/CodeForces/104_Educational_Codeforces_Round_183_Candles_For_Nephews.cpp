#include<bits/stdc++.h>
using namespace std;

int candles(int n, int c) {
	if(n%3==0) return c;
	return candles(n+1, c+1);
}

int main() {
	int t, n, x;
	cin>>t;
	while(t--) {
		cin>>n;
		if(n%3==0) {
			x = 0;
		}else {
			x = candles(n+1,1);
		}
		cout<<x<<endl;
	}
	return 0;
}