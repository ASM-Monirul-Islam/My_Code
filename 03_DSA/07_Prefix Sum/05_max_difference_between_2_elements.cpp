#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define pii pair<int, int>
#define pll pair<long long, long long>
#define eb emplace_back
#define F first
#define S second
#define pub push_back
#define pob pop_back
#define ll long long
#define srt(x) sort(x.begin(), x.end());
#define rsrt(x) sort(x.rbegin(), x.rend());
#define vout(x) for(int i=0; i<x.size(); i++) cout << x[i] << " ";
#define min_heap int, vector<int>, greater<int>
#define min_heap_pair pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>

int max_diff(vector<int>&arr) {
	vector<int>max_el(arr.size());
	max_el[arr.size()-1]=INT_MIN;
	for(int i=arr.size()-2; i>=0; i--) {
		max_el[i]=max(max_el[i+1], arr[i+1]);
	}
	int diff = INT_MIN;
	for(int i=0; i<arr.size(); i++) {
		if(arr[i]>=max_el[i]) continue;
		diff=max(diff, max_el[i]-arr[i]); 
	}
	return diff;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<max_diff(arr)<<endl;
	return 0;
}