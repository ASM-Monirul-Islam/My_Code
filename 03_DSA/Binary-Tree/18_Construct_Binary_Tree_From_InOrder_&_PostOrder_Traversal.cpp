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

int find_pos(vector<int>&inOrder, int target, int start, int end) {
	for(int i=start; i<=end; i++) {
		if(inOrder[i]==target) {
			return i;
		}
	}
	return -1;
}

node *build_tree(vector<int>&inOrder, vector<int>&postOrder, int start, int end, int index) {
	if(start>end) return nullptr;
	node *root = new node(postOrder[index]);
	int pos = find_pos(inOrder, postOrder[index], start, end);
	root->right = build_tree(inOrder, postOrder, pos+1, end, index-1);
	root->left = build_tree(inOrder, postOrder, start, pos-1, index-(end-pos)-1);
	return root;
}

vector<vector<int>>levelOrder(node *root) {
	vector<vector<int>>ans;
	if(!root) return ans;
	queue<node*>q;
	q.push(root);
	while(!q.empty()) {
		int size = q.size();
		vector<int>level;
		while(size--) {
			node *temp = q.front();
			q.pop();
			level.pub(temp->data);
			if(temp->left) q.push(temp->left);
			if(temp->right) q.push(temp->right);
		}
		ans.pub(level);
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;
	vector<int>inOrder(n), postOrder(n);
	for (int i=0; i<n; i++) {
		cin>>inOrder[i];
	}
	for (int i=0; i<n; i++) {
		cin>>postOrder[i];
	}
	int start = 0, end = inOrder.size();
	node *root = build_tree(inOrder, postOrder, 0, n-1, n-1);
	vector<vector<int>>ans = levelOrder(root);
	for(auto &i:ans) {
		for(auto &j:i) {
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}