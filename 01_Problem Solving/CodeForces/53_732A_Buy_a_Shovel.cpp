#include<bits/stdc++.h>
using namespace std;

int main() {
	int k, r, n=1;
	cin>>k>>r;
	while(true) {
		if(k%10 == r or (n*k)%10==0 or (n*k)%10==r) {
			break;
		}else {
			n++;
		}
	}
	cout<<n<<endl;
	return 0;
}