/*
Prefix Sum Array - Implementation

Given an array arr[], Find the prefix sum of the array. A prefix sum array is another array prefixSum[] of the same size, such that prefixSum[i] is arr[0] + arr[1] + arr[2] . . . arr[i].

Examples: 

Input: arr[] = [10, 20, 10, 5, 15]
Output: [10, 30, 40, 45, 60]
Explanation: For each index i, add all the elements from 0 to i:
prefixSum[0] = 10, 
prefixSum[1] = 10 + 20 = 30, 
prefixSum[2] = 10 + 20 + 10 = 40 and so on.

Input: arr[] = [30, 10, 10, 5, 50]
Output: [30, 40, 50, 55, 105]
Explanation: For each index i, add all the elements from 0 to i:
prefixSum[0] = 30, 
prefixSum[1] = 30 + 10 = 40,
prefixSum[2] = 30 + 10+ 10 = 50 and so on.
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

vector<int>prefix_arr(vector<int>&arr) {
	int n = arr.size();
	vector<int>ans(n);
	ans[0]=arr[0];
	for(int i=1; i<n; i++) {
		ans[i]=ans[i-1]+arr[i];
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
	vector<int>ans = prefix_arr(arr);
	vout(ans);
	return 0;
}