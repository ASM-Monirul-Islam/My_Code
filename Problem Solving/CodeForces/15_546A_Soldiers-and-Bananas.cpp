#include<bits/stdc++.h>
using namespace std;

int main() {
	int k,n,w, cost=0, borrow;
	cin>>k>>n>>w;
	for(int i=1; i<=w; i++) {
		cost+=(i*k);
	}
	if(cost<=n){
		borrow=0;
	} else {
		borrow=cost-n;
	}
	cout<<borrow<<endl;
	return 0;
}