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
    vector<vector<int>> ans;
    void helper(TreeNode* root, int d){
        if(root == nullptr) return;

        if(ans.size() == d){
            ans.push_back(vector<int>());
        }

        ans[d].push_back(root->val);
        helper(root->left, d+1);
        helper(root->right, d+1);
        return;

    }
    vector<int> rightSideView(TreeNode* root) {
        helper(root, 0);
        vector<int> anss;
        for(int i =0; i < ans.size(); i++){
            anss.push_back(ans[i].back());
        }
        return anss;

    }
};