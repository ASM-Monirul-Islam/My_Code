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

ll repeat(string s) {
	ll first=0, second=1, rep=1, max_rep=INT_MIN, n = s.size();
	while(first<n) {
		if(s[first]==s[second]) {
			rep++;
		}else {
			max_rep=max(max_rep, rep);
			rep=1;
			first=second;
		}
		second++;
	}
	return max_rep;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin>>s;
	cout<<repeat(s)<<endl;
	return 0;
}