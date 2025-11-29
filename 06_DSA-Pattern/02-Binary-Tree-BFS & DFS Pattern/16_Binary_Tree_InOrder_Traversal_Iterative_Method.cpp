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

struct node {
	int data;
	node *left, *right;
	node (int value) {
		data=value;
		left=right=nullptr;
	}
};

node *build_tree() {
	int rootVal, leftChild, rightChild;
	cin>>rootVal;
	if(rootVal==-1) return nullptr;
	node *root = new node(rootVal);
	queue<node*>q;
	q.push(root);
	while(!q.empty()) {
		node *temp = q.front();
		q.pop();
		cin>>leftChild;
		if(leftChild != -1) {
			temp->left = new node(leftChild);
			q.push(temp->left);
		}
		cin>>rightChild;
		if(rightChild != -1) {
			temp->right = new node(rightChild);
			q.push(temp->right);
		}
	}
	return root;
}

vector<int>inOrder(node *root) {
	vector<int>ans;
	stack<pair<node*, bool>>s;
	s.push({root, false});
	while(!s.empty()) {
		auto p = s.top();
		s.pop();
		node *temp = p.F;
		bool flag = p.S;
		if(!flag) {
			if(temp->right) s.push({temp->right, false});
			s.push({temp, true});
			if(temp->left) s.push({temp->left, false});
		}else {
			ans.pub(temp->data);
		}
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	node *root = build_tree();
	vector<int>ans = inOrder(root);
	vout(ans);
	return 0;
}