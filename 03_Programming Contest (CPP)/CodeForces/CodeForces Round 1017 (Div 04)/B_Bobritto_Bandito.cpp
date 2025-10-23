#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m, l, r,lp, rp;
	cin>>t;
	while(t--) {
		cin>>n>>m>>l>>r;
		lp=l;
		rp=r;
		int i=0;
		while(true) {
			if(rp-lp==m) break;
			if(i%2==0 and lp!=0) lp++;
			else if(i%2 !=0 and rp != 0) rp--;
			i++;
		}
		cout<<lp<<" "<<rp<<endl;
	}
	return 0;
}