#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n, move=0;
	cin>>n;
	vector<long long>arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	for(int i=1; i<n; i++) {
		if(arr[i]<arr[i-1]) {
			move+=(arr[i-1]-arr[i]);
			arr[i]=arr[i-1];
		}
	}
	cout<<move<<endl;
	return 0;
}