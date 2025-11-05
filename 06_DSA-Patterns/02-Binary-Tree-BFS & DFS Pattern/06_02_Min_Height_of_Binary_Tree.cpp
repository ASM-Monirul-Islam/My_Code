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

int minHeight(Node *root) {
	if(!root) return 0;
	if(!root->left) return 1+minHeight(root->right);
	if(!root->right) return 1+minHeight(root->left);
	return 1+min(minHeight(root->left), minHeight(root->right));
}
int main() {
	Node *root = Build_Tree();
	int ans = minHeight(root);
	cout<<ans<<endl;
	
	return 0;
}