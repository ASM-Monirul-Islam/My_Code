#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, count=0;
	cin>>n;
	vector<int>p(n);
	vector<int>q(n);
	for(int i=0; i<n; i++){
		cin>>p[i]>>q[i];
		if(q[i]-p[i]>=2){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}