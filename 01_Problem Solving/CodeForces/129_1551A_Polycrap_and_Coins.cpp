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

pair<int, int>coins(int n) {
	int c1, c2;
	if(n%3==1) {
		c2=n/3;
		c1=c2+1;
	}else {
		c1=n/3;
		c2=(n-(n/3))/2;
	}
	return {c1, c2};
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		pair<int, int>ans = coins(n);
		cout<<ans.F<<" "<<ans.S<<endl;
	}
	return 0;
}