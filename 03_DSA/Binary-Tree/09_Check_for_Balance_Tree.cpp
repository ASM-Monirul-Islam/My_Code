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

int checkHeight(Node *root) {
	if(!root) return 0;
	int l, r;
	l=checkHeight(root->left);
	if(l==-1) return -1;
	r=checkHeight(root->right);
	if(r==-1) return -1;
	if(abs(l-r)>1) return -1;
	return max(l,r)+1;
}

bool isBalanced(Node *root) {
	return checkHeight(root) != -1;
}

int main() {
	Node *root = Build_Tree();
	if(isBalanced(root)) cout<<"Balanced Tree"<<endl;
	else cout<<"Not a Balanced Tree"<<endl;
	return 0;
}
