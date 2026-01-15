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
#define SUM(x) accumulate(x.begin(), x.end(), 0);
#define vout(x) for(int i=0; i<x.size(); i++) cout << x[i] << " ";
#define min_heap int, vector<int>, greater<int>
#define min_heap_pair pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n;
	cin>>n;
	vector<ll>arr(n);
	for (ll i=0; i<n; i++) {
		cin>>arr[i];
	}
	ll move=0;
	for(ll i=1; i<n; i++) {
		if(arr[i-1]>arr[i]) {
			move+=(arr[i-1]-arr[i]);
			arr[i]=arr[i-1];
		}
	}
	cout<<move<<endl;
	return 0;
}