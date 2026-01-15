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

vector<int>permutation(int n) {
	if(n==1) return {n};
	if(n<4) return {-1};
	vector<int>v1, v2;
	for(int i=1; i<=n; i++) {
		if(i&1) v2.pub(i);
		else v1.pub(i);
	}
	vector<int>v(v1);
	v.insert(v.end(), v2.begin(), v2.end());
	return v;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;
	vector<int>ans = permutation(n);
	if(ans[0]== -1) cout<<"NO SOLUTION"<<endl;
	else {
		vout(ans);
	}
	return 0;
}