#include<bits/stdc++.h>
using namespace std;

long long solution(vector<long long>&stick) {
	long long cost=0;
	sort(stick.begin(), stick.end());
	long long mid=(stick.size()-1)/2;
	for(long long i=0; i<stick.size(); i++) {
		if(i==mid) continue;
		cost+=(llabs(stick[i]-stick[mid]));
	}
	return cost;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	cin>>n;
	vector<long long>stick(n);
	for(long long i=0; i<n; i++) {
		cin>>stick[i];
	}
	long long ans = solution(stick);
	cout<<ans<<endl;
	return 0;
}