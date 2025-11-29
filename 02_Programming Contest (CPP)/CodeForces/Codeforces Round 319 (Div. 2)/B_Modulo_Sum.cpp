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

bool modulo_sum(vector<ll>&arr, ll m) {
	sort(arr.begin(), arr.end());
	ll i=0, j=-1, sum, n=arr.size();
	while(i<n and j<n) {
		if(sum%m==0) return true;
		else if(sum<((m*(sum/m))+(sum%m))) sum+=arr[++j];
		else sum-=arr[i++];
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, m;
	cin>>n>>m;
	vector<ll>arr(n);
	for (ll i=0; i<n; i++) {
		cin>>arr[i];
	}
	if(modulo_sum(arr,m)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}