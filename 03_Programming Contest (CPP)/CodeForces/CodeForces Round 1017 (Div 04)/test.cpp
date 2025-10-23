#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a, b;
	b = n/2;
	if(n%2==0) {
		a=b;
	}else {
		a=b+1;
	}
	cout<<a<<" "<<b;
	return 0;
}