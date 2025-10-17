#include<bits/stdc++.h>
using namespace std;

int main() {
	list<int>l;
	l.push_front(1); //1
	l.push_front(2); // 2 1
	l.push_back(3); //2 1 3
	l.push_back(4); //2 1 3 4
	l.push_back(5); //2 1 3 4 5

	for(auto i: l){
		cout<<i<<" "; //2 1 3 4 5
	}
	cout<<endl;

	l.pop_back(); //2 1 3 4

	for(auto i: l){
		cout<<i<<" "; //2 1 3 4
	}
	cout<<endl;

	l.pop_front(); //1 3 4

	for(auto i: l){
		cout<<i<<" "; //1 3 4
	}
	cout<<endl;

	return 0;
}