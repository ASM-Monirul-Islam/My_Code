#include<bits/stdc++.h>
using namespace std;

int missing(vector<int>&arr) {
	sort(arr.begin(), arr.end());
	int n = arr.size();
	for(int i=1; i<=n; i++) {
		if(arr[i]!=i) {
			return i;
		}
	}
}

int main() {
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<missing(arr)<<endl;
	return 0;
}