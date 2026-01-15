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

struct node
{
	int data;
	node *left, *right;
	node(int value) {
		data = value;
		left=right=nullptr;
	}
};

node* insert(node *root, int target) {
	if(!root) {
		node *temp = new node(target);
		return temp;
	}
	if(target < root->data) {
		root->left = insert(root->left, target);
	}else {
		root->right = insert(root->right, target);
	}
	return root;
}

node* createBST(vector<int>&arr) {
	node *root = nullptr;
	for(int i=0; i<arr.size(); i++) {
		root = insert(root, arr[i]);
	}
	return root;
}

void levelOrder(node *root) {
	if(!root) return;
	queue<node*>q;
	q.push(root);
	while(!q.empty()) {
		int size = q.size();
		while(size--) {
			node *temp = q.front();
			q.pop();
			cout<<temp->data<<" ";
			if(temp->left) q.push(temp->left);
			if(temp->right) q.push(temp->right);
		}
		cout<<endl;
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	node *root = createBST(arr);
	levelOrder(root);
	return 0;
}