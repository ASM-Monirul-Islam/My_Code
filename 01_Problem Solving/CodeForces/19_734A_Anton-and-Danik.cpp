#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<char>v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
	}
	int a = count(v.begin(), v.end(), 'A');
	int d = count(v.begin(), v.end(), 'D');
	if(a>d) {
		cout<<"Anton"<<endl;
	} 
	else if(a<d) {
		cout<<"Danik"<<endl;
	} 
	else {
		cout<<"Friendship"<<endl;
	} 
	return 0;
}