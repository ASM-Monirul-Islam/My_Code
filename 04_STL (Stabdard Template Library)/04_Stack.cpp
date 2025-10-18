#include<bits/stdc++.h>
using namespace std;

int main() {
	stack<int>s;
	cout<<s.empty()<<endl; //1
	s.push(5); //5
	s.push(1); //5 1
	s.push(4); //5 1 4
	s.push(2); //5 1 4 2
	s.push(3); //5 1 4 2 3

	cout<<s.top()<<endl; //3
	cout<<s.size()<<endl; //5
	s.pop();
	cout<<s.top()<<endl; //2

	while(!s.empty()){
		cout<<s.top()<<" "; //2 4 1 5
		s.pop();
	}
	return 0;
}