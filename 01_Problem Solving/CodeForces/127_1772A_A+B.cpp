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

	int t, a, b;
	cin>>t;
	cin.ignore();
	while(t--) {
		string line;
		cin>>line;
		a=line[0]-'0';
		b=line[2]-'0';
		cout<<a+b<<endl;
	}
	return 0;
}