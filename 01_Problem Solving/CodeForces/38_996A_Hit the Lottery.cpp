#include<bits/stdc++.h>
using namespace std;

int main() {
	int bills, notes=0;
	cin>>bills;
	while(bills>0) {
		if(bills>=100) {
			notes+=(bills/100);
			bills%=100;
		}else if(bills>=20) {
			notes+=(bills/20);
			bills%=20;
		}else if(bills>=10) {
			notes+=(bills/10);
			bills%=10;
		}else if(bills>=5) {
			notes+=(bills/5);
			bills%=5;
		}else if(bills>=1) {
			notes+=(bills/1);
			bills%=1;
		}
	}
	cout<<notes<<endl;
	return 0;
}