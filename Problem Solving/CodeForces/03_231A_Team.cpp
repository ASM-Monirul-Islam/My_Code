#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>v(n);
	int output=0;
	for(int i=0; i<n; i++) {
		int count=0;
		for(int j=0; j<3; j++) {
			cin>>v[j];
			if(v[j]==1){
				count++;
			}
		}
		v.clear();
		if(count>=2) output++;
	}
	cout<<output<<endl;
	return 0;
}