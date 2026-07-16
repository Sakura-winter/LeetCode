class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        for(int i = 0; i < nums1.size(); i++){
            bool flag = false;
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            int position = distance(nums2.begin(), it);
            if(it == nums2.end()) ans.push_back(-1);
            for(int j = position + 1; j < nums2.size(); j++){
                if(nums1[i] < nums2[j]){
                    ans.push_back(nums2[j]);
                    flag = true;
                    break;
                }
            }
            if(!flag) ans.push_back(-1);
                   
            
        }
        return ans;
    }
};