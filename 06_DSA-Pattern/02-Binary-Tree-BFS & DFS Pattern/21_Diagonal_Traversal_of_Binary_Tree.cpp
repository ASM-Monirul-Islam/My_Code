#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define pii pair<int, int>
#define pll pair<long long, long long>
#define eb emplace_back
#define F first
#define S second
#define pub push_back
#define pob pop_back
#define ll long long
#define srt(x) sort(x.begin(), x.end());
#define rsrt(x) sort(x.rbegin(), x.rend());
#define vout(x) for(int i=0; i<x.size(); i++) cout << x[i] << " ";
#define min_heap int, vector<int>, greater<int>
#define min_heap_pair pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>

struct node{
	int data;
	node *left, *right;
	node(int value) {
		data=value;
		left=right=nullptr;
	}
};

node *Build_Tree() {
	int rootVal, leftChild, rightChild;
	queue<node*>q;
	node *root, *temp;
	cin>>rootVal;
	if(rootVal==-1) return nullptr;
	root = new node(rootVal);
	q.push(root);
	while(!q.empty()) {
		temp=q.front();
		q.pop();
		cin>>leftChild;
		if(leftChild!=-1) {
			temp->left = new node(leftChild);
			q.push(temp->left);
		}
		cin>>rightChild;
		if(rightChild!=-1) {
			temp->right = new node(rightChild);
			q.push(temp->right);
		}
	}
	return root;
}

vector<int>diagonal_traversal(node *root) {
	if(!root) return {};
	map<int, vector<int>>mp;
	queue<pair<node*, int>>q;
	q.push({root, 0});
	while(!q.empty()) {
		auto p = q.front();
		q.pop();
		node *temp = p.F;
		int level = p.S;
		mp[level].pub(temp->data);
		if(temp->right) q.push({temp->right, level});
		if(temp->left) q.push({temp->left, level+1});
	}
	vector<int>ans;
	for(auto &i:mp) {
		for(auto &j:i.S) {
			ans.pub(j);
		}
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	node *root = Build_Tree();
	vector<int>ans = diagonal_traversal(root);
	vout(ans);
	return 0;
}