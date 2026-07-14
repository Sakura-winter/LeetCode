class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int index = -1;
        for(int i = 0; i < nums.size(); i++){
            index = abs(nums[i]) - 1;
            if(nums[index] > 0){
                nums[index] *= -1;
            }else{
                ans.push_back(abs(nums[i]));
            }
            
        }
        return ans;
    }
};