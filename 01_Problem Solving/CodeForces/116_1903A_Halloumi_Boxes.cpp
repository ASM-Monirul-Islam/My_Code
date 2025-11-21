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

bool sorted(vector<int>&arr) {
	vector<int>temp(arr);
	sort(temp.begin(), temp.end());
	return temp==arr;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t, n, k;
	cin>>t;
	while(t--) {
		cin>>n>>k;
		vector<int>arr(n);
		for (int i=0; i<n; i++) {
			cin>>arr[i];
		}
		bool ans = false;
		if(sorted(arr)) ans = true;
		else if(k>=2) ans = true;
		cout<<(ans? "YES" : "NO")<<endl;
	}
	return 0;
}