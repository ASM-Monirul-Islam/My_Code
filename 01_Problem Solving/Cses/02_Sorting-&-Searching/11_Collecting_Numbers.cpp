#include<bits/stdc++.h>
using namespace std;

int round(vector<pair<int, int>>&arr) {
	sort(arr.begin(), arr.end());
	int count=1;
	for(int i=1; i<arr.size(); i++) {
		if(arr[i].second<arr[i-1].second) {
			count++;
		}
	}
	return count;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, num;
	cin>>n;
	vector<pair<int, int>>arr(n);
	for(int i=0; i<n; i++) {
		cin>>num;
		arr.emplace_back(num, i+1);
	}
	cout<<round(arr)<<endl;
	return 0;
}