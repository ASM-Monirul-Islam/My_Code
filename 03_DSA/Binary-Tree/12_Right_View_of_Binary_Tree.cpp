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

void rView(Node *root, int level, vector<int>&ans) {
	if(!root) return;
	if(ans.size()==level) ans.push_back(root->data);
	rView(root->right, level+1, ans);
	rView(root->left, level+1, ans);
}

vector<int>rightView(Node *root) {
	vector<int>ans;
	rView(root, 0, ans);
	return ans;
}

int main() {
	Node *root = Build_Tree();
	vector<int>ans = rightView(root);
	for(auto &i:ans) {
		cout<<i<<" ";
	}
	return 0;
}