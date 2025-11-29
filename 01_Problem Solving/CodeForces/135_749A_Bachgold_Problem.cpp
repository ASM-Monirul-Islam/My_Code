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

vector<int>primes(int n) {
	bool odd = false;
	vector<int>ans;
	if(n&1) {
		odd=true;
		n-=3;
	}
	int t = n/2;
	while(t--) {
		ans.pub(2);
	}
	if(odd) ans.pub(3);
	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;
	vector<int>ans = primes(n);
	cout<<ans.size()<<endl;
	for(auto &i: ans) {
		cout<<i<<" ";
	}
	return 0;
}