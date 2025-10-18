#include<bits/stdc++.h>
using namespace std;

int main() {
	int r, c;
	cin>>r>>c;
	bool check = true;
	int x= c-1;
	vector<vector<char>>v(r, vector<char>(c));
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			if(i%2==0) {
				v[i][j]='#';
			}else {
				v[i][j]='.';
			}
		}
		if(i%2 != 0) {
			if(check) {
				v[i][x]='#';
			}else {
				v[i][0]='#';
			}
			check = !check;
		}
	}
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cout<<v[i][j];
		}
		cout<<endl;
	}
	return 0;
}