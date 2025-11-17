#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node *Binary_Tree(){
	int rootVal, leftChild, rightChild;
	cin>>rootVal;
	if(rootVal==-1) return nullptr;
	Node *root = new Node(rootVal);
	queue<Node*>q;
	q.push(root);
	while(!q.empty()) {
		Node *temp = q.front();
		q.pop();
		cin>>leftChild;
		if(leftChild != -1) {
			temp->left = new Node(leftChild);
			q.push(temp->left);
		}
		cin>>rightChild;
		if(rightChild != -1) {
			temp->right = new Node(rightChild);
			q.push(temp->right);
		}
	}
	return root;
}

bool isCousins(Node* root, int x, int y) {
    queue<pair<Node*, Node*>>q;
    Node *p1, *p2;
    p1=p2=nullptr;
    q.push({root, nullptr});
    while(!q.empty()) {
        int size = q.size();
        while(size--) {
            Node *node = q.front().first;
            Node *parent = q.front().second;
            q.pop();
            if(node->data==x) p1=parent;
            if(node->data==y) p2=parent;
            if(node->left) q.push({node->left, node});
            if(node->right) q.push({node->right, node});
        }
        if(p1 and p2) return p1!=p2;
        if((p1 and !p2) or (!p1 and p2)) return false;
    }
    return false;
}

int main() {
	int x, y;
	Node *root = Binary_Tree();
	cin>>x>>y;
	if(isCousins(root, x, y)) cout<<x<<" and "<<y<<" are cousins"<<endl;
	else cout<<x<<" and "<<y<<" are not cousins"<<endl;
	return 0;
}