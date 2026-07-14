class Solution {
public:
    bool isAnagram(string s, string t) {
        

        vector<int> ans(26, 0);
        for(char& c: s){
            ans[c - 'a']++;
        }
        for(char& c: t){
            ans[c - 'a']--;
        }
        for(int& a : ans){
            if(a != 0){
                return false;
            }
        }
        return true;
    }
};