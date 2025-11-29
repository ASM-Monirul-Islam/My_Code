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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		vector<int>arr(n);
		int totalCandies=0;
		for (int i=0; i<n; i++) {
			cin>>arr[i];
			totalCandies+=arr[i];
		}
		int minCandy = *min_element(arr.begin(), arr.end());
		int eaten = totalCandies - (minCandy*n);
		cout<<eaten<<endl;
	}
	return 0;
}