class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            int comp = target - nums[i];
            //if found then return 
            if(mp.find(comp) != mp.end()){
                return {mp[comp], i};
            }
            //if not found insert current i and elemet associated to it
            mp[nums[i]] = i;
        }
        return {};


    }
};