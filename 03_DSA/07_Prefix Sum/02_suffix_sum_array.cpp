/*
Suffix Sum Array: For an array arr[] of size n, suffixSum[i] = arr[i] + arr[i+1] + ... + arr[n-1].
Example:
arr = [10, 20, 10, 5, 15] → suffixSum = [60, 50, 30, 20, 15]
*/

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

vector<int>suffix_arr(vector<int>&arr) {
	int n = arr.size();
	vector<int>ans(n);
	ans[n-1]=arr[n-1];
	for(int i=n-2; i>=0; i--) {
		ans[i]=ans[i+1]+arr[i];
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;
	vector<int>arr(n);
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	vector<int>ans = suffix_arr(arr);
	vout(ans);
	return 0;
}