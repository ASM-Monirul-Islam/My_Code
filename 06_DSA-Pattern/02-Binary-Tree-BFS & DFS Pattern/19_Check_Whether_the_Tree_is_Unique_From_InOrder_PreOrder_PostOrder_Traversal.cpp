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

struct node {
	int data;
	node *left, *right;
	node(int value) {
		data=value;
		left=right=nullptr;
	}
};

int find(vector<int>&in, int target, int start, int end) {
	for(int i=start; i<=end; i++) {
		if(in[i]==target) return i;
	}
	return -1;
}

node *build_from_in_post(vector<int>&in, vector<int>&post, int start, int end, int index) {
	if(start>end) return nullptr;
	node *root = new node(post[index]);
	int pos = find(in, post[index], start, end);
	root->right = build_from_in_post(in, post, pos+1, end, index-1);
	root->left = build_from_in_post(in, post, start, pos-1, index-(end-pos)-1);
	return root;
}

node *build_from_in_pre(vector<int>&in, vector<int>&pre, int start, int end, int index) {
	if(start>end) return nullptr;
	node *root = new node(pre[index]);
	int pos = find(in, pre[index], start, end);
	root->left = build_from_in_pre(in, pre, start, pos-1, index+1);
	root->right = build_from_in_pre(in, pre, pos+1, end, index+(pos-start)+1);
	return root;
}

bool isSame(node *t1, node *t2) {
	if(!t1 and !t2) return true;
	if(!t1 and t2 or t1 and !t2) return false;
	if(t1->data != t2->data) return false;
	return isSame(t1->left, t2->left) and isSame(t1->right, t2->right);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin>>n;
	vector<int>inOrder(n), preOrder(n), postOrder(n);
	for (int i=0; i<n; i++) {
		cin>>preOrder[i];
	}
	for (int i=0; i<n; i++) {
		cin>>inOrder[i];
	}
	for (int i=0; i<n; i++) {
		cin>>postOrder[i];
	}
	node *tree1 = build_from_in_pre(inOrder, preOrder, 0, n-1, 0);
	node *tree2 = build_from_in_post(inOrder, postOrder, 0, n-1, n-1);
	bool sameTree = isSame(tree1, tree2);
	cout<<(sameTree ? "YES" : "NO")<<endl;
	return 0;
}