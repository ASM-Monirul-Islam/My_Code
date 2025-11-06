#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b;
	cin>>n;
	if(n%2==0) {
		a = n/2;
		b = a;
	}else {
		a = n/2;
		b = a+1;
	}
	cout<<a<<" "<<b<<endl;
	return 0;
}