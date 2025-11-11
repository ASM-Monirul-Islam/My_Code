#include<bits/stdc++.h>
using namespace std;
/*
n = number of concert tickets
m = number of customers
h(1-n) = price of each tickets
t(1-m) = maximum price for each customer in the order they arrive

5 3
5 3 7 8 5
4 8 3
*/

vector<long long>Solution(vector<long long>&h, vector<long long>&t) {
	vector<long long>ans;
	multiset<int>s(h.begin(), h.end());
	long long n=h.size(), m=t.size(), i=0;
	for(auto price:t) {
		auto it = s.upper_bound(price);
		if(it==s.begin()) {
			ans.push_back(-1);
		}else {
			--it;
			ans.push_back(*it);
			s.erase(it);
		}
		
	}
	return ans;
}

int main() {
	long long n, m;
	cin>>n>>m;
	vector<long long>h(n), t(m);
	for(long long i=0; i<n; i++) {
		cin>>h[i];
	}
	for(long long i=0; i<m; i++) {
		cin>>t[i];
	}
	vector<long long>ans = Solution(h,t);
	for(auto &i:ans) cout<<i<<endl;
	return 0;
}