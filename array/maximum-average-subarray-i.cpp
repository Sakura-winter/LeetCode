class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        int right = k;
        double sum = 0;
        
        for(int i = 0 ; i < k; i++){
            sum += nums[i];
        }
        double maxAvg = sum/k;

        for(int i = 0; right < nums.size(); i++){
            
            sum -= nums[i];
            sum += nums[right];
            right++;
            maxAvg = max(maxAvg, sum/k);
        }
        return maxAvg;
    }
};