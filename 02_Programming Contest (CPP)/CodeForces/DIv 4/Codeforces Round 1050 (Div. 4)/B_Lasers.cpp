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

	int t;
	cin>>t;
	while(t--) {
		int n, m, x, y, count=0;
		cin>>n>>m>>x>>y;
		vector<int>horizontal(n), vertical(m);
		for(int i=0; i<n; i++) {
			cin>>horizontal[i];
			if(horizontal[i]<y) count++;
		}
		for(int i=0; i<m; i++) {
			cin>>vertical[i];
			if(vertical[i]<x) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}