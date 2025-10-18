#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, num;
	cin>>t;
	while(t--) {
		vector<int>digit(6,0);
		cin>>num;
		for(int i=0; i<6; i++) {
			if(num<=0) break;
			if(num%10==0) {
				num/=10;
				continue;
			}
			digit[i]=num%10;
			num/=10;
		}
		int sum1 = accumulate(digit.begin(), digit.begin()+3, 0);
		int sum2 = accumulate(digit.begin()+3, digit.end(), 0);
		if(sum1 == sum2) {
			cout<<"YES"<<endl;
		}else {
			cout<<"NO"<<endl;
		}
		digit.clear();
	}
	return 0;
}