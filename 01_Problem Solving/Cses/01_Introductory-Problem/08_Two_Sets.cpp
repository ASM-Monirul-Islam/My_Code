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

bool possible(int n) {
	int totalSum=(n*(n+1)/2);
	if(!(totalSum&1)) return true;
	return false;
}

vector<vector<int>>solution(int n) {
	vector<int>sub1, sub2;
	if(n%4==0) {
		for(int i=1; i<=n; i+=4) {
			sub1.pub(i);
			sub2.pub(i+1);
			sub2.pub(i+2);
			sub1.pub(i+3);
		}
	}else if(n%4==3) {
		sub1.pub(1);
		sub1.pub(2);
		sub2.pub(3);
		for(int i=4; i<=n; i+=4) {
			sub1.pub(i);
			sub2.pub(i+1);
			sub2.pub(i+2);
			sub1.pub(i+3);
		}
	}
	return {sub1, sub2};
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;
	if(!possible(n)) {
		cout<<"NO"<<endl;
		return 0;
	}
	vector<vector<int>>ans=solution(n);
	for(int i=0; i<2; i++) {
		cout<<ans[i].size()<<endl;
		for(int j=0; j<ans[i].size(); j++) {
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
