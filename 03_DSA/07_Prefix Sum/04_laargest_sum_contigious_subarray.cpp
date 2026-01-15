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

int largest_sum_m1(vector<int>&arr) {
	int current=0, max_sum=INT_MIN;
	for(int i=0; i<arr.size(); i++) {
		current = max(arr[i], current+arr[i]);
		max_sum = max(max_sum, current);
	}
	return max_sum;
}

int largest_sum_m2(vector<int>&arr) {
	int current =0, max_sum = INT_MIN;
	for(int i=0; i<arr.size(); i++) {
		current+=arr[i];
		if(current<0) current=0;
		max_sum=max(max_sum, current);
	}
	return max_sum;
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
	cout<<largest_sum_m1(arr)<<endl;
	cout<<largest_sum_m2(arr)<<endl;
	return 0;
}