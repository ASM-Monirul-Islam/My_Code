/*
Given two binary trees with their root nodes r1 and r2, return true if both of them are 
identical, otherwise return false.
Note: Two trees are identical when they have the same data and the arrangement of the data 
is also same.
*/


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

bool isIdentical(Node* r1, Node* r2) {
    if(!r1 and !r2) return true;
    if(r1 and !r2 or !r1 and r2) return false;
    if(r1->data != r2->data) return false;
    return isIdentical(r1->left, r2->left) and isIdentical(r1->right, r2->right);
}

int main() {
	Node *r1, *r2;
	r1=Build_Tree();
	r2=Build_Tree();
	if(isIdentical(r1, r2)) {
		cout<<"Trees are same"<<endl;
	}else {
		cout<<"Trees are not same"<<endl;
	}
	return 0;
}