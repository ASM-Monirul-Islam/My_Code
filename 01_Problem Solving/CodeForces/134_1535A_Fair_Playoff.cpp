#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
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

bool fair(int s1, int s2, int s3, int s4) {
	int first_max, first_min, sec_max, sec_min;
	first_max = max(s1, s2);
	first_min = min(s1, s2);
	sec_max = max(s3, s4);
	sec_min = min(s3, s4);
	if(first_min > sec_max or sec_min > first_max) return false;
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while(t--) {
		int s1, s2, s3, s4;
		cin>>s1>>s2>>s3>>s4;
		cout<<(fair(s1, s2, s3, s4) ? "YES" : "NO") <<endl;
	}
	return 0;
}