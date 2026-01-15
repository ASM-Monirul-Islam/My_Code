/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int burning(TreeNode *root, int start, int &timer) {
        if(!root) return 0;
        if(root->val == start) return -1;
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
    void find(TreeNode *root, int start,  TreeNode* &burned_node) {
        if(!root) return;
        if(root->val == start) {
            burned_node = root;
            return;
        }
        find(root->left, start, burned_node);
        find(root->right, start, burned_node);
    }
    int height(TreeNode* root) {
        if(!root) return 0;
        return 1+max(height(root->left), height(root->right));
    }
    int amountOfTime(TreeNode* root, int start) {
        int timer = 0;
        burning(root, start, timer);
        TreeNode *burned_node=nullptr;
        find(root, start, burned_node);
        int h = height(burned_node)-1;
        return max(h, timer);
    }
};