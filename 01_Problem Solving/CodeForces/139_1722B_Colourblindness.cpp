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

	int t, n;
	cin>>t;
	while(t--) {
		string s1, s2;
		cin>>n;
		cin>>s1;
		cin>>s2;
		for(int i=0; i<n; i++) {
			if(s1[i]=='G') s1[i]='B';
			if(s2[i]=='G') s2[i]='B';
			if(s1[i] != s2[i]) {
				cout<<"NO"<<endl;
				goto nextCase;
			}
		}
		cout<<"YES"<<endl;
		nextCase: ;
	}
	return 0;
}