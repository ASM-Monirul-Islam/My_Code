#include<bits/stdc++.h>
using namespace std;

vector<int>first_and_last_occur(vector<int>&arr, int target) {
	int left=0, right=arr.size()-1, first=-1, last=-1, mid;

	//First Occurence
	while(left<=right) {
		mid=(left+right)/2;
		if(arr[mid]==target) {
			first=mid;
			right=mid-1;
		}else if(target<arr[mid]) {
			right=mid-1;
		}else {
			left=mid+1;
		}
	}

	//Last Occurence
	left=0, right=arr.size()-1;
	while(left<=right) {
		mid=(left+right)/2;
		if(arr[mid]==target) {
			last=mid;
			left=mid+1;
		}else if(target<arr[mid]) {
			right=mid-1;
		}else {
			left = mid+1;
		}
	}
	return {first+1, last+1};
}

int main() {
	int n, target;
	cin>>n;
	vector<int>arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cin>>target;
	vector<int>ans = first_and_last_occur(arr, target);
	for(auto &i:ans) {
		cout<<i<<" ";
	}
	return 0;
}