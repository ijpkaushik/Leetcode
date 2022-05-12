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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorderTraversalHelper(root, ans);
        return ans;
    }
    void inorderTraversalHelper(TreeNode* root, vector<int>& ans){
        if(root){
            inorderTraversalHelper(root->left, ans);
            ans.push_back(root->val);
            inorderTraversalHelper(root->right, ans);
        }
    }
};