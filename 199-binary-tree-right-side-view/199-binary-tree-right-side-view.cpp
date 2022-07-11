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
    void rightSideViewUtil(TreeNode* root, vector<int> &ans, int lvl){
        if(!root)
            return;
        if (ans.size()==lvl)
            ans.push_back(root->val);
        rightSideViewUtil(root->right, ans, lvl+1);
        rightSideViewUtil(root->left, ans, lvl+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        rightSideViewUtil(root, ans, 0);
        return ans;
    }
};