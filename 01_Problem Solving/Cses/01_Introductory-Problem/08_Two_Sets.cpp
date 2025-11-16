#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	vector<long long>num1, num2;
	long long sum = n*(n+1)/2;
	if(sum%2!=0) {
		cout<<"NO"<<endl;
		return 0;
	}else {
		cout<<"YES"<<endl;
	}
	if(n%4==0) {
		for(long long i=1; i<=n; i+=4) {
			num1.push_back(i);
			num1.push_back(i+3);
			num2.push_back(i+1);
			num2.push_back(i+2);
		}
	}else if(n%4==3) {
		num1.push_back(1);
		num1.push_back(2);
		num2.push_back(3);
		for(long long i=4; i<=n; i+=4) {
			num1.push_back(i);
			num1.push_back(i+3);
			num2.push_back(i+1);
			num2.push_back(i+2);
		}
	}
	cout<<num1.size()<<endl;
	for(auto &i:num1) {
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<num2.size()<<endl;
	for(auto &i:num2) {
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}