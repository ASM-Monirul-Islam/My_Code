#include<bits/stdc++.h>
using namespace std;

vector<long long>arr(long long n){
	vector<long long>ans;
	ans.push_back(n);
	while(n!=1) {
		if(n%2==0) {
			n/=2;
		}else {
			n = (n*3)+1;
		}
		ans.push_back(n);
	}
	return ans;
}

int main() {
	long long n;
	cin>>n;
	vector<long long>ans = arr(n);
	for(auto &i:ans) {
		cout<<i<<" ";
	}
	return 0;
}