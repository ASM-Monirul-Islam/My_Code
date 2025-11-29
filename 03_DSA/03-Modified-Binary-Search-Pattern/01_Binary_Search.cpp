#include<bits/stdc++.h>
using namespace std;

int index(vector<int>&arr, int target, int left, int right) {
	if(left>right) return -1;
	int mid = (left+right)/2;
	if(arr[mid]==target) return mid+1;
	else if(target>arr[mid]) return index(arr, target, mid+1, right);
	else return index(arr, target, left, mid-1);
}

int firstOccurence(vector<int>&arr, int target) {
	int left=0, right=arr.size()-1;
	return index(arr,target,left, right);
}

int main() {
	int n, target;
	cin>>n;
	vector<int>arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cin>>target;
	int ans = firstOccurence(arr, target);
	cout<<ans<<endl;
	return 0;
}