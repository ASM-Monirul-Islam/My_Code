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

ll gcd(ll a, ll b) {
	if(a%b==0) return b;
	return gcd(b, a%b);
}

ll smallest_int(vector<ll>&arr) {
	ll n = arr.size();
	for(ll i=2; i<=1000000000000000000; i++) {
		for(ll j=0; j<n; j++) {
			if(gcd(i, arr[j])==1) {
				return i;
			}
		}
	}
	return -1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		vector<ll>arr(n);
		for(ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		int ans = smallest_int(arr);
		cout<<ans<<endl;
	}
	
	return 0;
}