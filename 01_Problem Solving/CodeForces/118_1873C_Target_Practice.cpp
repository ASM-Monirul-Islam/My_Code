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

	int t;
	cin>>t;
	while(t--) {
		vector<string>target(10);
		for(int i=0; i<10; i++) {
			cin>>target[i];
		}
		int ring, score=0;
		for(int i=0; i<10; i++) {
			for(int j=0; j<10; j++) {
				if(target[i][j]=='X') {
					ring = min({i, j, 9-i, 9-j});
					score+=(ring+1);
				}
			}
		}
		cout<<score<<endl;
	}
	return 0;
}