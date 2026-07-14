class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1){
            return 0;
        }

        int left = 0;
        int current_state = 1;
        int cnt = 0;
        for(int right = 0; right < nums.size(); right++){
            current_state *= nums[right];
            while(current_state >= k){
                current_state /= nums[left];
                left++;
            }
            cnt += (right - left + 1);
        }
        return cnt;
    }
};