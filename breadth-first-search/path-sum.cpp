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
    //int sum = 0;
    bool helper(TreeNode* root, int ts, int sum){
        if(root == nullptr ) return false;

        //first explore left side tree
        sum += root->val;

        //cout << sum << " ";
        if(sum == ts && root->left == nullptr && root->right == nullptr) return true;
        bool a = helper(root->left, ts, sum);
        //explore right side
        bool b = helper(root->right, ts, sum);
        return a||b;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;
        return helper(root, targetSum , 0);

    }
};