#include<bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define eb emplace_back
#define F first
#define S second
#define pub push_back
#define pob pop_back
#define ll long long
#define min_heap int, vector<int>, greater<int>
#define min_heap_pair pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>
#define vout(x) for(int i=0; i<x.size(); i++) cout << x[i] << " ";

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	priority_queue<min_heap>min_pq; //min heap

	min_pq.push(5);
	min_pq.push(12);
	min_pq.push(34);

	cout<<min_pq.top()<<endl; //5

	while(!min_pq.empty()) {
		cout<<min_pq.top()<<" ";
		min_pq.pop();
	}
	cout<<endl;

	priority_queue<min_heap_pair>pair_pq;

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
	return 0;
}