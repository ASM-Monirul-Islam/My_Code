#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int>v(4);
	int x, sum=0;
	for(int i=0; i<4; i++) {
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	for(int i=0; i<4; i++) {
		int n = v[i];
		x = count(v.begin(), v.end(), n);
		if(x>1) {
			sum+= (x-1);
			auto i = remove(v.begin(), v.end(), n);
			v.erase(i, v.end());
		}
	}
	cout<<sum<<endl;
	return 0;
}