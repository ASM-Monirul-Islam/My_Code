#include<bits/stdc++.h>
using namespace std;

vector<long long>modulo_pair(vector<long long>&arr) {
	int n = arr.size(), rem;
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			rem = arr[j]%arr[i];
			if(rem%2==0) {
				return {arr[i], arr[j]};
			}
		}
	}
	return {-1};
}

int main() {
	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		vector<long long>arr(n);
		for(int i=0; i<n; i++) {
			cin>>arr[i];
		}
		vector<long long>ans = modulo_pair(arr);
		for(auto &i:ans) {
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}