#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int>&a, const pair<int, int>&b) {
	return a.second<b.second;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, a, b;
	cin>>n;
	vector<pair<int, int>>movies;
	for(int i=0; i<n; i++) {
		cin>>a>>b;
		movies.emplace_back(a,b);
	}
	sort(movies.begin(), movies.end(), cmp);
	int lastEnd=0, count=0;
	for(auto &i:movies) {
		if(i.first>=lastEnd) {
			count++;
			lastEnd=i.second;
		}
	}
	cout<<count<<endl;
	return 0;
}