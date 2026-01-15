#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define pii pair<int, int>
#define pll pair<long long, long long>
#define eb emplace_back
#define F first
#define S second
#define pub push_back
#define pob pop_back
#define ll long long
#define srt(x) sort(x.begin(), x.end());
#define rsrt(x) sort(x.rbegin(), x.rend());
#define vout(x) for(int i=0; i<x.size(); i++) cout << x[i] << " ";
#define min_heap int, vector<int>, greater<int>
#define min_heap_pair pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>

struct node{
	int data;
	node *left, *right;
	node(int value) {
		data=value;
		left=right=nullptr;
	}
};

node *Build_Tree() {
	int rootVal, leftChild, rightChild;
	queue<node*>q;
	node *root, *temp;
	cin>>rootVal;
	if(rootVal==-1) return nullptr;
	root = new node(rootVal);
	q.push(root);
	while(!q.empty()) {
		temp=q.front();
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


int burning(node *root, int start, int &timer) {
    if(!root) return 0;
    if(root->data == start) return -1;
    int left = burning(root->left, start, timer);
    int right = burning(root->right, start, timer);
    if(left<0) {
        timer = max(timer, abs(left)+right);
        return left-1;
    }
    if(right<0) {
        timer = max(timer, left+abs(right));
        return right-1;
    }
    return 1+max(left, right);
}
void find(node *root, int start,  node* &burned_node) {
    if(!root) return;
    if(root->data == start) {
        burned_node = root;
        return;
    }
    find(root->left, start, burned_node);
    find(root->right, start, burned_node);
}
int height(node* root) {
    if(!root) return 0;
    return 1+max(height(root->left), height(root->right));
}
int amountOfTime(node* root, int start) {
    int timer = 0;
    burning(root, start, timer);
    node *burned_node=nullptr;
    find(root, start, burned_node);
    int h = height(burned_node)-1;
    return max(h, timer);
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	node *root = Build_Tree();
	int target;
	cin>>target;
	int timer =0;
	cout<<amountOfTime(root, target)<<endl;
	return 0;
}