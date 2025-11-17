#include<bits/stdc++.h>
using namespace std;

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

ll occurences(ll n, ll x) {
	ll count=0;
	for(int i=1; i*i<=x; i++) {
		if(x%i==0) {
			ll j=x/i;
			if(i<=n and j<=n) {
				if(i!=j) {
					count+=2;
				}else {
					count++;
				}
			}
		}
	}
	return count;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, x;
	cin>>n>>x;

	cout<<occurences(n, x)<<endl;
	return 0;
}