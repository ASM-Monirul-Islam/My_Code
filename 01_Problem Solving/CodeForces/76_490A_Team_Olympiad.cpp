#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int programming=0, math=0, pe=0, teams;
	vector<int>programmingList;
	vector<int>mathList;
	vector<int>peList;
	cin>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
		if(v[i]==1) {
			programming++;
			programmingList.push_back(i+1);
		}
		else if(v[i]==2) {
			math++;
			mathList.push_back(i+1);
		}
		else if(v[i]==3) {
			pe++;
			peList.push_back(i+1);
		}
	}
	teams = min(programming, min(math, pe));
	cout<<teams<<endl;
	for(int i=0; i<teams; i++) {
		cout<<programmingList[i]<<" "<<mathList[i]<<" "<<peList[i]<<endl;
	}
	return 0;
}