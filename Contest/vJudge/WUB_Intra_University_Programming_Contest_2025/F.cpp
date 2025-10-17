#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
		v[i]%=3;
	}
	int count0, count1, count2;
	count0 = count(v.begin(), v.end(), 0);
	count1 = count(v.begin(), v.end(), 1);
	count2 = count(v.begin(), v.end(), 2);
	count0--;
	int ans = ((count0*(count0+1))/2)+(count2*count1);
	cout<<ans<<endl;
	return 0;
}