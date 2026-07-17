class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        /*vector<int> ans;
        
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
        return ans;*/
        unordered_map<int,int> mp;
        stack<int> st;
        for(int i = nums2.size()-1; i >= 0; i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }
            mp[nums2[i]] = st.empty()? -1 : st.top();
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int i: nums1){
            ans.push_back(mp[i]);
        }
        return ans;
        
    }
};