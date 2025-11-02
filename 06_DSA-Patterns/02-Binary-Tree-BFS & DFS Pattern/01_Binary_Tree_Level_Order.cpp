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

vector<vector<int>>levelOrder(TreeNode *root) {
	vector<vector<int>>ans;
	if(!root) return ans;
	queue<TreeNode*>q;
	q.push(root);
	TreeNode *temp;
	while(!q.empty()) {
		vector<int>level;
		int size = q.size();
		for(int i=0; i<size; i++) {
			temp=q.front();
			q.pop();
			level.push_back(temp->val);
			if(temp->left) q.push(temp->left);
			if(temp->right) q.push(temp->right);
		}
		ans.push_back(level);
	}
	return ans;
}

int main() {
	TreeNode *root = Binary_Tree();
	vector<vector<int>>level = levelOrder(root);
	for(auto &i:level) {
		cout<<"[";
		for(int j=0; j<i.size(); j++) {
			cout<<i[j];
			if(j<i.size()-1) cout<<",";
		}
		cout<<"]";
	}
	return 0;
}