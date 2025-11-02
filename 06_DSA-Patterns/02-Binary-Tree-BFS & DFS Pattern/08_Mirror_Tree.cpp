
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

void levelOrderFn(Node *root) {
	queue<Node*>q;
	q.push(root);
	Node *temp;
	while(!q.empty()) {
		int size = q.size();
		for(int i=0; i<size; i++) {
			temp=q.front();
			q.pop();
			cout<<temp->data<<" ";
			if(temp->left) q.push(temp->left);
			if(temp->right) q.push(temp->right);
		}
		cout<<endl;
	}
}

void mirrorTree(Node *root) {
	if(!root) return;
	Node *temp = root->left;
	root->left = root->right;
	root->right = temp;
	mirrorTree(root->left); 
	mirrorTree(root->right);
}

int main() {
	Node *root = Build_Tree();
	cout<<"Original Tree:"<<endl;
	levelOrderFn(root);
	cout<<endl;
	mirrorTree(root);
	cout<<"Mirror Tree:"<<endl;
	levelOrderFn(root);
	return 0;
}