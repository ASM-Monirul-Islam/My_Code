#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--) {
		vector<int>sides(4);
		for(int i=0; i<4; i++) {
			cin>>sides[i];
		}
		int c = count(sides.begin(), sides.end(), sides[0]);
		if(c!=4) {
			cout<<"NO"<<endl;
		}else {
			cout<<"YES"<<endl;
		}
	}
	return 0;
}