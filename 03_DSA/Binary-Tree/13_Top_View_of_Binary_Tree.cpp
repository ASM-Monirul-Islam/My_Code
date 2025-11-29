#include<bits/stdc++.h>
using namespace std;

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

void find(Node *root, int pos, int &l, int &r) {
	if(!root) return;
	l=min(l,pos);
	r=max(r,pos);
	find(root->left, pos-1, l, r);
	find(root->right, pos+1, l, r);
}

vector<int>topView(Node *root) {
	int l=0, r=0;
	find(root, 0, l, r);
	vector<int>ans(r-l+1);
	vector<bool>filled(r-l+1, false);
	queue<pair<Node*, int>>q;
	q.push({root, -l});
	while(!q.empty()) {
		Node *temp=q.front().first;
		int level = q.front().second;
		q.pop();
		if(!filled[level]) {
			filled[level]=true;
			ans[level]=temp->data;
		}
		if(temp->left) q.push({temp->left, level-1});
		if(temp->right) q.push({temp->right, level+1});
	}
	return ans;
}

int main() {
	Node *root = Build_Tree();
	vector<int>ans = topView(root);
	for(auto &i:ans) {
		cout<<i<<" ";
	}
	return 0;
}