class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> answer;
        int totalSum = 0;
        for(int i = 0; i < nums.size(); i++){
            totalSum += nums[i];
        }
        int leftSum = 0;
        for(int i = 0; i < nums.size(); i++){
            int rightSum = totalSum - leftSum - nums[i];
            
            answer.push_back(abs(leftSum - rightSum));
            leftSum += nums[i];
        }

        return answer;


    }
};