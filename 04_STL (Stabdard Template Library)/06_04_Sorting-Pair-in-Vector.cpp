#include<bits/stdc++.h>
using namespace std;

bool sorting(pair<int, string>a, pair<int, string>b){
	return a.first>b.first;
}

int main() {
	int roll;
	string name;
	vector<pair<int, string>>v;
	for(int i=0; i<3; i++) {
		cin>>roll>>name;
		v.emplace_back(roll, name);
	}
	/* Input:
	3982 Sayem
	3973 Hafiza
	3980 Sojib
	*/

	sort(v.begin(), v.end(), sorting);

	for(int i=0; i<3; i++) {
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	/* Output:
	3982 Sayem
	3980 Sojib
	3973 Hafiza
	*/

	return 0;
}