#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *left, *right;
    node(int value) {
        data=value;
        left=right=nullptr;
    }
};

node *Binary_Tree() {
    node *root, *temp;
    int rootVal, leftChild, rightChild;
    cin>>rootVal;
    if(rootVal== -1) return nullptr;
    queue<node*>q;
    root = new node(rootVal);
    q.push(root);
    while(!q.empty()) {
        temp = q.front();
        q.pop();
        cin>>leftChild;
        if(leftChild!=-1) {
            temp->left = new node(leftChild);
            q.push(temp->left);
        }
        cin>>rightChild;
        if(rightChild!=-1) {
            temp->right = new node(rightChild);
            q.push(temp->right);
        }
    }
    return root;
}

void preOrderFn(node *temp) {
    if(!temp) return;
    cout<<temp->data<<" ";
    preOrderFn(temp->left);
    preOrderFn(temp->right);
}

vector<vector<int>>levelOrderFn(node *root) {
    vector<vector<int>>result;
    if(!root) return result;
    queue<node*>q;
    q.push(root);
    node *temp;
    while(!q.empty()) {
        int size = q.size();
        vector<int>level;
        for(int i=0; i<size; i++) {
            temp = q.front();
            q.pop();
            level.push_back(temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        result.push_back(level);
    }
    return result;
}

int sumOfNodesFn(node *root) {
    if(!root) return 0;
    return root->data+sumOfNodesFn(root->left)+sumOfNodesFn(root->right);
}

int sizeOfBinaryTreeFn(node *root) {
    if(!root) return 0;
    return 1+sizeOfBinaryTreeFn(root->left)+sizeOfBinaryTreeFn(root->right);
}

int heightOfBinaryTreeFn(node *root) {
    if(!root) return 0;
    return 1+max(heightOfBinaryTreeFn(root->left), heightOfBinaryTreeFn(root->right));
}

int countLeafNodesFn(node *root) {
    if(!root) return 0;
    if(!root->left and !root->right) return 1;
    return countLeafNodesFn(root->left)+countLeafNodesFn(root->right);
}

int countNonLeafNodesFn(node *root) {
    if(!root) return 0;
    if(!root->left and !root->right) return 0;
    return 1+countNonLeafNodesFn(root->left)+countNonLeafNodesFn(root->right);
}

int main() {
    node *root = Binary_Tree();
    preOrderFn(root);
    cout<<endl;
    vector<vector<int>>levelOrder=levelOrderFn(root);
    for(auto &i:levelOrder) {
        cout<<"[";
        for(int j=0; j<i.size(); j++) {
            cout<<i[j];
            if(j<i.size()-1) {
                cout<<",";
            }
        }
        cout<<"]";
    }
    cout<<endl;
    int sumOfNodes = sumOfNodesFn(root);
    int sizeOfBinaryTree = sizeOfBinaryTreeFn(root);
    int heightOfBinaryTree = heightOfBinaryTreeFn(root);
    int countLeafNodes = countLeafNodesFn(root);
    int countNonLeafNodes = countNonLeafNodesFn(root);
    cout<<sumOfNodes<<endl;
    cout<<sizeOfBinaryTree<<endl;
    cout<<heightOfBinaryTree<<endl;
    cout<<countLeafNodes<<endl;
    cout<<countNonLeafNodes<<endl;
    return 0;
}