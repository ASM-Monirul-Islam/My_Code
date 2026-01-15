/*
Given an array of integers arr, return true if it is possible to split it in two subarrays 
(without reordering the elements), such that the sum of the two subarrays are equal. If it 
is not possible then return false.

Examples:

Input: arr = [1, 2, 3, 4, 5, 5]
Output: true
Explanation: In the above example, we can divide the array into two subarrays with equal sum. T
he two subarrays are: [1, 2, 3, 4] and [5, 5]. The sum of both the subarrays are 10. Hence, the answer is true.
Input: arr = [4, 3, 2, 1]
Output: false
Explanation: In the above example, we cannot divide the array into two subarrays with equal sum. 
Hence, the answer is false.
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

bool subarray(vector<int>&arr) {
	int sum1=0, sum2=accumulate(arr.begin(), arr.end(), 0), flag=0;
	while(flag<arr.size()-1) {
		sum1+=arr[flag];
		sum2-=arr[flag];
		if(sum1==sum2) return true;
		flag++;
	}
	return false;
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
	cout<<(subarray(arr) ? "YES" : "NO")<<endl;
	return 0;
}