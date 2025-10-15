#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, cnt, uniq;
	cin>>t;
	while(t--) {
		cin>>n;
		vector<int>v(n);
		for(int i=0; i<n; i++) {
			cin>>v[i];
		}
		vector<int>temp(v);
		sort(temp.begin(), temp.end());
		cnt = count(temp.begin(), temp.end(), temp[0]);
		if(cnt==1) {
			uniq = temp[0];
		}else {
			uniq = temp[n-1];
		}
		cout<<find(v.begin(), v.end(), uniq)-v.begin()+1<<endl;
		v.clear();
	}
	return 0;
}