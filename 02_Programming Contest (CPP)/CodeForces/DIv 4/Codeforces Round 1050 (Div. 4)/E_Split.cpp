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

	ll t;
	cin>>t;
	while(t--) {
		ll n, k;
		cin>>n>>k;
		unordered_map<ll, ll>freq;
		vector<ll>arr(n);
		for(auto &i: arr) {
			cin>>i;
			freq[i]++;
		}
		bool possible = true;
		for(auto &i: arr) {
			if(freq[i]%k != 0) {
				possible=false;
				break;
			}
		}
		if(!possible) {
			cout<<"0\n";
			continue;
		}
		unordered_map<ll, ll>mp;
		ll r=-1, ans=0;
		for(ll l=0; l<n; l++) {
			while(r<n-1) {
				if(mp[arr[r+1]] < freq[arr[r+1]]/k) {
					mp[arr[r+1]]++;
					r++;
				}else break;
			}
			ans += (r-l+1);
			mp[arr[l]]--;
		}
		cout<<ans<<endl;
	}
	return 0;
}