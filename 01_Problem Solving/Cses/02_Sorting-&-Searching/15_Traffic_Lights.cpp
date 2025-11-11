#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, n, pos;
	cin>>x>>n;
	set<int>street={0, x};
	multiset<int>passage={x};
	for(int i=0; i<n; i++) {
		cin>>pos;
		auto right = street.upper_bound(pos);
		auto left = prev(right);

		passage.erase(passage.find(*right-*left));

		passage.insert(*right-pos);
		passage.insert(pos-*left);

		street.insert(pos);

		cout<<*passage.rbegin()<<" ";
	}
	return 0;
}