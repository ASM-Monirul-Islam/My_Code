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
#define vout(x) for(int i=0; i<x.size(); i++) cout << x[i] << " ";
#define min_heap int, vector<int>, greater<int>
#define min_heap_pair pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>

bool colored(char ch) {
	return ch=='C' or ch=='M' or ch=='Y';
}

bool check_colored(int n, int m, vector<vector<char>>&matrix) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(colored(matrix[i][j])) {
				return true;
			}
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin>>n>>m;
	vector<vector<char>>matrix(n, vector<char>(m));
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>matrix[i][j];
		}
	}
	cout<<(check_colored(n, m, matrix) ? "#Color" : "#Black&White")<<endl;
	return 0;
}