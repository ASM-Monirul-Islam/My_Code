#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, moves;
	cin>>t;
	while(t--) {
		cin>>a>>b;
		int maxVal = max(a,b);
		int minVal = min(a, b);
		moves = ((maxVal-minVal)/10)+1;
		if((maxVal-minVal)%10==0) {
			moves--;
		}
		cout<<moves<<endl;
	}
	return 0;
}