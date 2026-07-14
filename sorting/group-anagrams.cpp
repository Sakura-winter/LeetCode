class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        //vector<string> temp = strs;
        unordered_map<string, vector<string>> mp;
        for(int i = 0; i < strs.size() ; i++){
            string value = strs[i];
            string key = value;
            sort(key.begin(), key.end());
            mp[key].push_back(value);
        }
        for(auto x : mp){
            ans.push_back(x.second);
        }
        return ans;



    }
};