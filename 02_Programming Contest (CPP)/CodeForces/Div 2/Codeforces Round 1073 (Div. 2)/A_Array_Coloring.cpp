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

bool cmp(const pair<int, int>&a, const pair<int, int>&b) {
	return a.first < b.first;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<pair<int, int>>arr;
		int col = 1;
		// 0 -> red
		// 1 -> blue
		for(int i=0; i<n; i++) {
			int card;
			cin>>card;
			col = (col+1)%2;
			arr.emplace_back(card, col);
		}

		sort(arr.begin(), arr.end(), cmp);

		bool valid = true;

		for(int i=0; i<n-1; i++) {
			int col1 = arr[i].second, col2 = arr[i+1].second;
			if(col1==col2) {
				valid = false;
				break;
			}
		}
		if(valid) {
			cout<<"YES"<<endl;
		}else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}