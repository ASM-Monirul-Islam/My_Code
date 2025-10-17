#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<pair<int, string>>v;
	v.push_back({3982, "Sayem"});
	for(auto i:v){
		cout<<i.first<<" "<<i.second; //3982 Sayem
	}
	cout<<endl;

	vector<pair<int, string>>data;
	int roll;
	string name;
	for(int i=0; i<5; i++) {
		cout<<"Enter roll and name: ";
		cin>>roll>>name;
		data.emplace_back(roll, name);
	}
	/* Inputs:
	Enter roll and name: 3982 Sayem
	Enter roll and name: 3973 Hafiza
	Enter roll and name: 3980 Sojib
	Enter roll and name: 3977 Aminul
	Enter roll and name: 3974 Saiful
	*/
	
	for(int i=0; i<5; i++) {
		cout<<data[i].first<<" "<<data[i].second<<endl;
	}
	cout<<endl;
	/* Outputs :
	3982 Sayem
	3973 Hafiza
	3980 Sojib
	3977 Aminul
	3974 Saiful
	*/

	
	return 0;
}