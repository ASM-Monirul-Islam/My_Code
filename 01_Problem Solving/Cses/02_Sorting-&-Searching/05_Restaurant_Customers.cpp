#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, arrival, departure;
	cin>>n;
	vector<pair<int, int>>events;
	for(int i=0; i<n; i++) {
		cin>>arrival>>departure;
		events.emplace_back(arrival, +1);
		events.emplace_back(departure, -1);
	}
	sort(events.begin(), events.end());
	int current=0, maxCustomer=INT_MIN;
	for(auto &i:events) {
		current+=i.second;
		maxCustomer=max(current, maxCustomer);
	}
	cout<<maxCustomer<<endl;
	return 0;
}