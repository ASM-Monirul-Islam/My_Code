#include<bits/stdc++.h>
using namespace std;

int main() {
	int r, c;
	cin>>r>>c;
	vector<vector<int>>V(r, vector<int>(c));
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cin>>V[i][j];
		}
	}

	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cout<<V[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}