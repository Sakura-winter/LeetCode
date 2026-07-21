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
    /*int height(TreeNode* root){
        if(root == nullptr) return 0;

        return 1 + max(height(root->left), height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        int lh = height(root->left);
        int rh = height(root->right);

        if(abs(lh - rh) > 1){
            return false;
        }

        return isBalanced(root->left) && isBalanced(root->right);
        
    }*/
    int dfs(TreeNode* root){
        if(root == nullptr){
            return 0;
        }

        //check left subtree
        int left = dfs(root->left);
        if(left == -1) return -1;

        //check right subtree
        int right = dfs(root->right);
        if(right == -1) return -1;

        //now we have height of both left and right
        if(abs(right - left) > 1) return -1;

        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        return dfs(root) != -1;
    }
};