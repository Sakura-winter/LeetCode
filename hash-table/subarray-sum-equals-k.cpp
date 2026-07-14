class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;// we'll store how many times we have see the current sum
        mp[0] = 1;
        int currentSum = 0;
        int cnt = 0;
        for(int i =0; i < nums.size(); i++){
            currentSum += nums[i];
            //check if currentSum - k exist
            if(mp.find(currentSum - k) != mp.end()){
                cnt += mp[currentSum - k];
            }

            mp[currentSum]++;
        }
        return cnt;

    }
};