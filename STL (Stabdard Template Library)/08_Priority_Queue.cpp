#include<bits/stdc++.h>
using namespace std;

int main() {
	priority_queue<int>max_pq; //max heap
	max_pq.push(5);
	max_pq.push(12);
	max_pq.push(34);

	cout<<max_pq.top()<<endl; //34

	while(!max_pq.empty()) {
		cout<<max_pq.top()<<" ";
		max_pq.pop();
	}
	cout<<endl;
	// Output: 34 12 5 

	priority_queue<int, vector<int>, greater<int> >min_pq; //min heap

	min_pq.push(5);
	min_pq.push(12);
	min_pq.push(34);

	cout<<min_pq.top()<<endl; //5

	while(!min_pq.empty()) {
		cout<<min_pq.top()<<" ";
		min_pq.pop();
	}
	cout<<endl;
	// Output: 5 12 34


	// with pair<int, int>

	priority_queue<pair<int, int>,  vector<pair<int, int>>,  greater<pair<int, int>>>pair_pq;

	pair_pq.push({10, 1});  // distance 10 to node 1
    pair_pq.push({5, 2});   // distance 5 to node 2
    pair_pq.push({20, 3});  // distance 20 to node 3

	while(!pair_pq.empty()) {
		auto p = pair_pq.top();
		int x = p.first;
		int y = p.second;
		cout<<"("<<x<<","<<y<<")"<<" ";
		pair_pq.pop();
	}
	// Output: (5,2) (10,1) (20,3) 
	return 0;
}