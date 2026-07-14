class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currentSum1 = 0;
        int maxEle = nums[0];
        int currentSum2 = 0;
        int minEle = nums[0];
        int totalSum = 0;
        

        for(int i =0; i < nums.size(); i++){
            totalSum += nums[i];
            currentSum1 = max(nums[i], nums[i] + currentSum1);
            currentSum2 = min(nums[i], nums[i] + currentSum2);

            maxEle = max(maxEle, currentSum1);
            minEle = min(minEle, currentSum2);
        }


        int cir = totalSum - minEle;
        if(maxEle < 0){
            return maxEle;
        }
        return max(maxEle, cir);

        

    }
};