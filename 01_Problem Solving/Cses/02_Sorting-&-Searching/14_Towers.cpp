#include<bits/stdc++.h>
using namespace std;

int solution(vector<int>&cubes) {
	vector<int>towers;
	for(int i=0; i<cubes.size(); i++) {
		auto it = upper_bound(towers.begin(), towers.end(), cubes[i]);
		if(it==towers.end()) {
			towers.push_back(cubes[i]);
		}else {
			*it=cubes[i];
		}
	}
	return towers.size();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;
	vector<int>cubes(n);
	for (int i=0; i<n; i++) {
		cin>>cubes[i];
	}
	cout<<solution(cubes)<<endl;
	return 0;
}