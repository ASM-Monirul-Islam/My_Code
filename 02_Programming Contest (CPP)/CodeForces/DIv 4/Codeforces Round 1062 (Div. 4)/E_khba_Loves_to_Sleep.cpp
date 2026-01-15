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

struct range {
	ll l, r, dirr;
};

struct cmp {
	bool operator() (const range &a, const range &b) {
		return (a.r-a.l) < (b.r-b.l);
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll t;
	cin>>t;
	while(t--) {
		ll n, k, x;
		cin>>n>>k>>x;

		vector<ll>arr(n);

		for(ll i=0; i<n; i++) {
			cin>>arr[i];
		}

		srt(arr);

		vector<range>gaps;

		gaps.pub({0, arr[0]-1, 1});
		gaps.pub({arr[n-1]+1, x, -1});

		for(ll i=1; i<n; i++) {
			ll l = arr[i-1]+1;
			ll r = arr[i]-1;
			ll mid = (l+r)/2;

			gaps.pub({l, mid, -1});
			gaps.pub({mid+1, r, 1});
		}

		priority_queue<range, vector<range>, cmp>pq;

		for(auto &it: gaps) {
			pq.push(it);
		}

		vector<ll>ans;
		set<ll>alreadyVisited;

		while(k--) {
			auto topElement = pq.top();
			pq.pop();

			if(topElement.dirr == -1) {
				if(alreadyVisited.count(topElement.r)) {
					k++;
					continue;
				}
				ans.pub(topElement.r--);
			}else {
				if(alreadyVisited.count(topElement.l)) {
					k++;
					continue;
				}
				ans.pub(topElement.l++);
			}
			pq.push(topElement);
			alreadyVisited.insert(ans.back());
		}

		srt(ans);

		for(auto &it : ans) {
			cout<<it<<" ";
		}
		cout<<endl;
	}
	return 0;
}