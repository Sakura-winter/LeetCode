class Solution {
public:
    map<char, string> mp = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };

    void helper(string digits, vector<string>& ans, int idx, string temp){
        if(temp.size() == digits.size()) return ans.push_back(temp);

        for(int i = 0; i < mp[digits[idx]].size(); i++){
            helper(digits, ans, idx+1, temp+mp[digits[idx]][i]);
        }
        return;
        
    }

    vector<string> letterCombinations(string digits) {
        
        //int idx = 0;
        vector<string> ans;

        helper(digits, ans, 0, "");
        return ans;

    }
};