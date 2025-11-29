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

int operations(string s) {
	int count=0;
	for(int i=s.size()-1; i>0; i--) {
		if(s[i-1]!=s[i]) {
			s[i-1]=s[i];
			count++;
		}
	}
	return count;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		cin.ignore();
		string s;
		cin>>s;
		int ans = operations(s);
		cout<<ans<<endl;
	}
	return 0;
}