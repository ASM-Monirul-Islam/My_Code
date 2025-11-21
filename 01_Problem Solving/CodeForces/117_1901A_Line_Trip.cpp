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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t, n, x;
	cin>>t;
	while(t--) {
		cin>>n>>x;
		vector<int>arr(n+2);
		arr[0]=0;
		for (int i=1; i<=n; i++) {
			cin>>arr[i];
		}
		arr[n+1]=x;
		int start = arr[1];
		int end = (arr[n+1]-arr[n])*2;
		int min_fuel = max(start, end);
		if(arr.size()>1) {
			for(int i=2; i<n+1; i++) {
				min_fuel = max(arr[i]-arr[i-1], min_fuel);
			}
		}
		cout<<min_fuel<<endl;
	}
	return 0;
}