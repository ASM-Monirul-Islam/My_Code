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

bool square(string s) {
	int n = s.size();
	if(n&1) return false;
	string first_half = s.substr(0, n/2);
	string sec_half = s.substr(n/2, n);
	return (first_half==sec_half? true : false);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;
	cin.ignore();
	while(n--) {
		string s;
		cin>>s;
		cout<<(square(s)? "YES" : "NO")<<endl;
	}
	return 0;
}