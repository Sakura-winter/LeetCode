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
    unordered_map<int,int> mp;
    TreeNode* helper(vector<int> preorder, int preorderStart, int inorderStart, int size){
        if(size<=0){
            return nullptr;
        }

        int rootValue = preorder[preorderStart];
        int inorderRootIdx = mp[rootValue];
        int leftSize = inorderRootIdx - inorderStart;

        TreeNode* left = helper(preorder, preorderStart + 1, inorderStart, leftSize);
        TreeNode* right = helper(preorder, preorderStart+leftSize+1, inorderRootIdx + 1, size - leftSize - 1);
        return new TreeNode(rootValue, left, right);
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        //map for fast lookup in inorder
        int size = preorder.size();
        for(int i = 0; i < inorder.size(); i++){
            mp[inorder[i]] = i;
        }
        //idx of Preorder
        //idx of Inorder
        //nodes to process in the subtree
        return helper(preorder,0, 0, size);
    }
};