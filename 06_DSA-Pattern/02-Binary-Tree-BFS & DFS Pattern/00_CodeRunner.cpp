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

struct Node{
	int data;
	Node *left, *right;
	Node(int value) {
		data=value;
		left=right=nullptr;
	}
};

Node *Build_Tree() {
	int rootVal, leftChild, rightChild;
	queue<Node*>q;
	Node *root, *temp;
	cin>>rootVal;
	if(rootVal==-1) return nullptr;
	root = new Node(rootVal);
	q.push(root);
	while(!q.empty()) {
		temp=q.front();
		q.pop();
		cin>>leftChild;
		if(leftChild!=-1) {
			temp->left = new Node(leftChild);
			q.push(temp->left);
		}
		cin>>rightChild;
		if(rightChild!=-1) {
			temp->right = new Node(rightChild);
			q.push(temp->right);
		}
	}
	return root;
}

vector<int>Vertical_traversal(Node *root) {
	map<int, vector<int>>mp;
	queue<pair<Node*, int>>q;
	q.push({root, 0});
	while(!q.empty()) {
		auto p = q.front();
		q.pop();
		Node *temp = p.F;
		int level = p.S;
		mp[level].pub(temp->data);
		if(temp->left) q.push({temp->left, level-1});
		if(temp->right) q.push({temp->right, level+1});
	}
	vector<int>ans;
	for(auto &i: mp) {
		for(auto &j:i.S) {
			ans.pub(j);
		}
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	Node *root = Build_Tree();
	vector<int>ans = Vertical_traversal(root);
	vout(ans);
	return 0;
}