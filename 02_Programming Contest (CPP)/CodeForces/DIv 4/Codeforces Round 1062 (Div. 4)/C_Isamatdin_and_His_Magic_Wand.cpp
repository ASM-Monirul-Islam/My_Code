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

bool diff_parity(vector<int>&toys) {
	int n = toys.size();
	bool even, odd, diff;
	even=false, odd=false, diff=false;
	for(int i=0; i<n; i++) {
		if(toys[i]&1) odd=true;
		else even=true;
		if(even and odd) {
			return true;
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<int>toys(n);
		for(int i=0; i<n; i++) {
			cin>>toys[i];
		}
		if(diff_parity(toys)) {
			srt(toys);
		}
		vout(toys);
		cout<<endl;
	}
	return 0;
}