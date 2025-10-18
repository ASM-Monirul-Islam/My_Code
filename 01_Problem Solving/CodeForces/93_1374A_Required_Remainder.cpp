#include<bits/stdc++.h>
using namespace std;

int maximum_int(long long x, long long y, long long n) {
	for(int i=n; i>=0; i--) {
		if(i%x==y) {
			return i;
		}
	}
	return 0;
}

int main() {
	long long t, x, y, n, k;
	cin>>t;
	while(t--) {
		cin>>x>>y>>n;
		k = maximum_int(x,y,n);
		cout<<k<<endl;
	}
	return 0;
}