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

vector<int> leftView(Node *root) {
    vector<int>ans;
    queue<Node *>q;
    if(!root) return ans;
    q.push(root);
    while(!q.empty()) {
        ans.push_back(q.front()->data);
        int n = q.size();
        while(n--) {
            Node *temp = q.front();
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    return ans;
}

int main() {
	Node *root = Build_Tree();
	vector<int>ans = leftView(root);
	for(auto &i:ans) {
		cout<<i<<" ";
	}
	return 0;
}