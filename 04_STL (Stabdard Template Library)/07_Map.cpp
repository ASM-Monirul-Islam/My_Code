#include<bits/stdc++.h>
using namespace std;

int main() {
	string name;
	map<int, string>m;
	for(int i=0; i<5; i++) {
		cout<<"Enter your name: ";
		cin>>name;
		m[i]=name;
	}
	/* Input: 
	Enter your name: sayem
	Enter your name: hafiza
	Enter your name: sojib
	Enter your name: saiful
	Enter your name: aminul
	*/
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	/* Output:
	0 sayem
	1 hafiza
	2 sojib
	3 saiful
	4 aminul
	*/
	return 0;
}