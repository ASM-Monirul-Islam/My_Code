#include<bits/stdc++.h>
using namespace std;

int main() {
	queue<int>q;

	cout<<q.empty()<<endl; //1 (means true)

	q.push(5); //5
	q.push(1); //5 1
	q.push(4); //5 1 4
	q.push(2); //5 1 4 2
	q.push(3); //5 1 4 2 3

	cout<<q.front()<<endl; //5

	cout<<q.back()<<endl; //3

	cout<<q.size()<<endl; //5


	while(!q.empty()){
		cout<<q.front()<<" "; //5 1 4 2 3
		q.pop();
	}
	return 0;
}