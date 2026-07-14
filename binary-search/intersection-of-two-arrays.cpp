class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> ans;
        for(int num: nums2){
            if(s.erase(num)){//s.eraser(num) ensure other num dupicaltes doesn't follow again
                ans.push_back(num);
            }
        }
        return ans;
    }
};