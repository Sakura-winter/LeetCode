class Solution {
public:
    int atmost(vector<int>& nums, int goal){
        if(goal < 0){
            return 0;
        }
        int left = 0;
        int curr_state = 0;
        int cnt = 0;
        for(int right = 0; right < nums.size(); right++){
            curr_state += nums[right];

            while(curr_state > goal){
                curr_state -= nums[left];
                left++;
            }
            cnt += (right - left + 1);
        }
        return cnt;

    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return atmost(nums, goal) - atmost(nums, goal - 1);

        
    }
};