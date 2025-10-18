#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin>>n>>k;
	vector<int>arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	sort(arr.rbegin(), arr.rbegin());
	int count=0;
	for(int i=0; i<n; i++) {
		if(arr[i]>=arr[k-1] and arr[i]!=0){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}