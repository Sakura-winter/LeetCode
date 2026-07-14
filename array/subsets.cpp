class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>>& ans,int idx, vector<int> temp ){
        if(idx == nums.size()){
            ans.push_back(temp);
            return;
        }
        // exclude the elements
        helper(nums, ans, idx+1, temp);
        // choose the elements
        temp.push_back(nums[idx]);
        helper(nums, ans, idx + 1, temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        helper(nums, ans, 0, {});
        return ans;

    }
};