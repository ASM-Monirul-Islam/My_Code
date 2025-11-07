#include<bits/stdc++.h>
using namespace std;

long long number(long long y, long long x) {
	long long ans, n=max(x,y);
	if(n%2==0) {
		if(y==n) ans = n*n-x+1;
		else ans = (n-1)*(n-1)+y;
	}else {
		if(x==n) ans = n*n-y+1;
		else ans = (n-1)*(n-1)+x;
	}
	return ans;
}

int main() {
	long long t, x, y;
	cin>>t;
	while(t--) {
		cin>>y>>x;
		long long ans = number(y,x);
		cout<<ans<<endl;
	}
	return 0;
}