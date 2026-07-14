class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        /*for(int i = 0; i < nums.size(); i++){
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;*/
        int i = 0, j = nums.size()-1, k = nums.size() - 1;
        vector<int> ans(nums.size());
        while(i <= j){
            int sqrI = nums[i] * nums[i];
            int sqrJ = nums[j]* nums[j];

            if(sqrI > sqrJ){
                ans[k--] = sqrI;
                i++;
            }else{
                ans[k--] = sqrJ;
                j--;
            }
            
        }
        ans[0] = nums[i] * nums[i];
        return ans;
   
    }
};