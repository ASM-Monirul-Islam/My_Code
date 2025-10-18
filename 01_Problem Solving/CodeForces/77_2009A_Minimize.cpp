#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c, n;
	cin>>t;
	while(t--) {
		cin>>a>>b;
		if(a==b) {
			n=0;
		}else {
			c = (a+b)/2;
			n = (c-a)+(b-c);
		}
		cout<<n<<endl;
	}
	return 0;
}