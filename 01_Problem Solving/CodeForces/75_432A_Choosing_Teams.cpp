#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k, count=0;
	cin>>n>>k;
	vector<int>v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
		if((v[i]+k)<=5) {
			count++;
		} 
	}
	if(count>=3) {
		cout<<count/3<<endl;
	}else {
		cout<<0<<endl;
	}
	return 0;
}