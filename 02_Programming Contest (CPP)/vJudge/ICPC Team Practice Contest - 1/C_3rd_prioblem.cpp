#include<bits/stdc++.h>
using namespace std;

int main() {
	string s, d, m, y;
	getline(cin, s);
	int day, month, year;
	stringstream ss(s);
	getline(ss, y, '/');
	getline(ss, m, '/');
	getline(ss, d, '/');
	day=stoi(d);
	month=stoi(m);
	year=stoi(y);
	if(year<2019 or (year==2019 and month<=4 and day<=30)) cout<<"Heisei"<<endl;
	else cout<<"TBD"<<endl;
	return 0;
}