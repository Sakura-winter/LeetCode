class Solution {
public:
    void loop(vector<int>& nums, vector<int>& ans){
        for(int i =0; i < nums.size(); i++){
            ans.push_back(nums[i]);
        }
    }
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        loop(nums, ans);
        loop(nums, ans);
        return ans;
    }
};