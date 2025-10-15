#include<bits/stdc++.h>
using namespace std;

int main() {
	int r,c;
	vector<vector<int>>M(5,vector<int>(5));
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			cin>>M[i][j];
			if(M[i][j]==1){
				r=i;
				c=j;
			}
		}
	}
	int n = abs(r-2)+abs(c-2);
	cout<<n<<endl;
	return 0;
}