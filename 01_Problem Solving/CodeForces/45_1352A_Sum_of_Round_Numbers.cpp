#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, count, digit, place;
	vector<int>v;
	cin>>t;
	while(t--) {
		count=0;
		place = 1;
		cin>>n;
		while(n!=0) {
			digit = n%10;
			if(digit!=0) {
				v.push_back(digit*place);
			}
			count++;
			n/=10;
			place*=10;
		}
		cout<<v.size()<<endl;
		for(auto i:v) {
			cout<<i<<" ";
		}
		cout<<endl;
		v.clear();
	}
	return 0;
}