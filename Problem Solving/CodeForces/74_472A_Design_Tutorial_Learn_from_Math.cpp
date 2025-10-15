#include<bits/stdc++.h>
using namespace std;

bool checkComposite(int n) {
	if(n<=1) return false;
	for(int i=2; i*i<=n; i++) {
		if(n%i==0) return true;
	}
	return false;
}

int main() {
	int n, x, y;
	cin>>n;
	x=n/2;
	if(n%2==0) {
		y=x;
	}else {
		y=x+1;
	}
	while(!checkComposite(x) or !checkComposite(y)) {
		x--;
		y++;
	}
	cout<<x<<" "<<y<<endl;
	return 0;
}