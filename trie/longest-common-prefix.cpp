class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        string ans = "";
        string first = strs[0];
        for(int i = 0; i < first.size(); i++){
            char c = first[i];
            for(int j = 1; j < strs.size(); j++){
                if(c != strs[j][i]) return ans;
            }
            ans += c;
        }
        return ans;
    }
};