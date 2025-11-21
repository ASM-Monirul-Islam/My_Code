#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define pii pair<int, int>
#define eb emplace_back
#define F first
#define S second
#define pub push_back
#define pob pop_back
#define ll long long
#define min_heap int, vector<int>, greater<int>
#define min_heap_pair pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>
#define vout(x) for(int i=0; i<x.size(); i++) cout << x[i] << " ";

int solution(vector<int>&arr) {
	int n = arr.size();
	int maxPos = find(arr.begin(), arr.end(), *max_element(arr.begin(), arr.end()))-arr.begin();
	int minPos = find(arr.rbegin(), arr.rend(), *min_element(arr.begin(), arr.end()))-arr.rbegin();
	minPos = n-1-minPos;
	int ans = maxPos+(n-1-minPos);
	if(maxPos>minPos) ans--;
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
	cout<<solution(arr)<<endl;
	return 0;
}