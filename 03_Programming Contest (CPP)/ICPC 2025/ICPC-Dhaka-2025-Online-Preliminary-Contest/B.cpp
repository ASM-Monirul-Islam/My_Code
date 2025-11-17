#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t, a, v, l, n;
	cin>>t;
	while(t--) {
		cin>>a>>v>>l>>n;
		cout<<(min(a, v)>n ? "YES" : "NO") <<endl;
	}
	return 0;
}