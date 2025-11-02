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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(!root) return result;
        queue<TreeNode*>q;
        bool zigzag=false;
        q.push(root);
        TreeNode *temp;
        while(!q.empty()) {
            int size = q.size();
            vector<int>level;
            for(int i=0; i<size; i++) {
                temp = q.front();
                q.pop();
                level.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(zigzag) {
                reverse(level.begin(), level.end());
            }
            zigzag = !zigzag;
            result.push_back(level);
        }
        return result;
    }
};