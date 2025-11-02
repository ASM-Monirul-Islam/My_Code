#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
	int val;
	TreeNode *left, *right;
	TreeNode(int data) {
		val=data;
		left=right=nullptr;
	}
};

TreeNode *Binary_Tree(){
	int rootVal, leftChild, rightChild;
	cin>>rootVal;
	if(rootVal==-1) return nullptr;
	TreeNode *root = new TreeNode(rootVal);
	queue<TreeNode*>q;
	q.push(root);
	while(!q.empty()) {
		TreeNode *temp = q.front();
		q.pop();
		cin>>leftChild;
		if(leftChild != -1) {
			temp->left = new TreeNode(leftChild);
			q.push(temp->left);
		}
		cin>>rightChild;
		if(rightChild != -1) {
			temp->right = new TreeNode(rightChild);
			q.push(temp->right);
		}
	}
	return root;
}

int sumOfBinaryTree(TreeNode *root) {
	if(!root) return 0;
	return root->val + sumOfBinaryTree(root->left) + sumOfBinaryTree(root->right);
}

int main() {
	TreeNode *root = Binary_Tree();
	int ans = sumOfBinaryTree(root);
	cout<<ans<<endl;
	return 0;
}