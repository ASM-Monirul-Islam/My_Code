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
    node *left,  *right;
    node(int value) {
        data=value;
        left=right=nullptr;
    }
};

node *build_tree() {
    int rootVal, leftChild, rightChild;
    cin>>rootVal;
    if(rootVal==-1) return nullptr;
    node *root = new node(rootVal);
    queue<node*>q;
    q.push(root);
    while(!q.empty()) {
        node *temp = q.front();
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

// vector<vector<int>>levelOrder(node *root) {
//     vector<vector<int>>result;
//     if(!root) return result;
//     queue<node*>q;
//     q.push(root);
//     while(!q.empty()) {
//         int sz = q.size();
//         vector<int>level;
//         while(sz--) {
//             node *temp = q.front();
//             q.pop();
//             level.pub(temp->data);
//             if(temp->left) q.push(temp->left);
//             if(temp->right) q.push(temp->right);
//         }
//         result.pub(level);
//     }
//     return result;
// }

void levelOrder(node *root) {
    queue<node*>q;
    q.push(root);
    while(!q.empty()) {
        int sz = q.size();
        while(sz--) {
            node *temp = q.front();
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        cout<<endl;
    }
}

int count_size(node *root) {
    if(!root) return 0;
    return 1+count_size(root->left)+count_size(root->right);
}

int sum_of_nodes(node *root) {
    if(!root) return 0;
    return root->data + sum_of_nodes(root->left) + sum_of_nodes(root->right);
}

int count_leaf_nodes(node *root) {
    if(!root) return 0;
    if(!root->left and !root->right) return 1;
    return count_leaf_nodes(root->left) + count_leaf_nodes(root->right);
}

int non_count_leaf_nodes(node *root) {
    if(!root) return 0;
    if(!root->left and !root->right) return 0;
    return 1+non_count_leaf_nodes(root->left) + non_count_leaf_nodes(root->right);
}

int height(node *root) {
    if(!root) return 0;
    return 1+max(height(root->left), height(root->right));
}

int min_height(node *root) {
    if(!root) return 0;
    if(!root->left) return 1+min_height(root->right);
    if(!root->right) return 1+min_height(root->left);
    return 1+min(min_height(root->left), min_height(root->right));
}

bool identical(node *r1, node *r2) {
    if(!r1 and !r2) return true;
    if(!r1 and r2 or r1 and !r2) return false;
    if(r1->data != r2->data) return false;
    return identical(r1->left, r2->left) and identical(r1->right, r2->right);
}

bool isIdentical(node* r1, node* r2) {
    if(!r1 and !r2) return true;
    if(r1 and !r2 or !r1 and r2) return false;
    if(r1->data != r2->data) return false;
    return isIdentical(r1->left, r2->left) and isIdentical(r1->right, r2->right);
}

void mirror(node *root) {
    if(!root) return;
    node *temp = root->left;
    root->left=root->right;
    root->right=temp;
    mirror(root->left);
    mirror(root->right);
}

node *tree_height(node *root) {
    if(!root) return 0;
    return 1 + max(tree_height(root->left), tree_height(root->right));
}

bool balanced(node *root) {
    if(!root) return true;
    if(abs(tree_height(root->left)-tree_height(root->right))>1) return false;
    return balanced(root->left) and balanced(root->right);
}

bool hasSum(node *root, int target) {
    if(!root) return false;
    if(!root->left and !root->right) return root->data==target;
    int remaining = target - root->data;
    return hasSum(root->left, remaining) or hasSum(root->right, remaining);
}

bool isCousin(node *root, int n1, int n2) {
    queue<pair<node*, node*>>q;
    node *p1, *p2;
    p1=p2=nullptr;
    q.push({root, nullptr});
    while(!q.empty()) {
        int size=q.size();
        while(size--) {
            auto p = q.front();
            q.pop();
            node *n = p.F;
            node *parent = p.S;
            if(n->data==n1) p1=parent;
            if(n->data==n2) p2=parent;
            if(n->left) q.push({n->left, n});
            if(n->right) q.push({n->right, n});
        }
        if(p1 and p2) return p1!=p2;
        if(p1 and !p2 or !p1 and p2) return false;
    }
    return false;
}

void left_view_fn(node *root, int level, vector<int>&ans) {
    if(!root) return;
    if(ans.size()==level) {
        ans.pub(root->data);
    }
    left_view_fn(root->left, level+1, ans);
    left_view_fn(root->right, level+1, ans);
}

vector<int>left_view(node *root) {
    vector<int>ans;
    left_view_fn(root, 0, ans);
    return ans;
}

void right_view_fn(node *root, int level, vector<int>&ans) {
    if(!root) return;
    if(ans.size()==level) ans.pub(root->data);
    right_view_fn(root->right, level+1, ans);
    right_view_fn(root->left, level+1, ans);
}

vector<int>right_view(node *root) {
    vector<int>ans;
    right_view_fn(root, 0, ans);
    return ans;
}

void find(node *root, int pos, int &l, int &r) {
    if(!root) return;
    l=min(l, pos);
    r=max(r, pos);
    find(root->left, pos-1, l, r);
    find(root->right, pos+1, l, r);
}

vector<int>top_view(node *root) {
    int l=0, r=0;
    find(root, 0, l, r);
    vector<int>ans(r-l+1);
    vector<bool>filled(r-l+1, false);
    queue<pair<node*, int>>q;
    q.push({root, -l});
    while(!q.empty()) {
        node *temp = q.front().F;
        int level = q.front().S;
        q.pop();
        if(!filled[level]) {
            filled[level]=true;
            ans[level]=temp->data;
        }
        if(temp->left) q.push({temp->left, level-1});
        if(temp->right) q.push({temp->right, level+1});
    }
    return ans;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // node *root = build_tree();
    // node *r1, *r2;
    // r1=build_tree();
    // r2=build_tree();
    // vector<vector<int>>ans = levelOrder(root);
    // for(int i=0; i<ans.size(); i++) {
    //     for(int j=0; j<ans[i].size(); j++) {
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // cout<<min_height(root)<<endl;
    // cout<<(isIdentical(r1, r2) ? "YES" : "NO")<<endl;

    // node *root = build_tree();
    // levelOrder(root);
    // cout<<endl;
    // mirror(root);
    // levelOrder(root);

    // cout<<(balanced(root) ? "YES" : "NO") <<endl;
    // int target;
    // cin>>target;
    
    // cout<<(hasSum(root, target) ? "YES" : "NO")<<endl;
    // int n1, n2;
    // cin>>n1>>n2;
    // cout<<(isCousin(root, n1, n2) ? "YES" : "NO")<<endl;
    node *root =  build_tree();
    // vector<int>ans = right_view(root);
    // vout(ans);
    vector<int>ans = top_view(root);
    vout(ans);
    return 0;
}

/*

*/