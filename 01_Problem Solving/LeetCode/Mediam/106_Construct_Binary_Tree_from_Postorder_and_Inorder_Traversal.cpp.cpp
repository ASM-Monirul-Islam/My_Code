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
    int find(vector<int>&inorder, int target, int start, int end) {
        for(int i=start; i<=end; i++) {
            if(target==inorder[i]) return i;
        }
        return -1;    
    }
    TreeNode* solution(vector<int>&inorder, vector<int>&postorder, int start, int end, int index) {
        if(start>end) return nullptr;
        TreeNode *root = new TreeNode(postorder[index]);
        int pos = find(inorder, postorder[index], start, end);
        root->right = solution(inorder, postorder, pos+1, end, index-1);
        root->left = solution(inorder, postorder, start, pos-1, index-(end-pos)-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return solution(inorder, postorder, 0, inorder.size()-1, inorder.size()-1);
    }
};