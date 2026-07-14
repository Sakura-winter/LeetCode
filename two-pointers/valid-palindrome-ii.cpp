class Solution {
public:
    bool canRemove(string& s, int i, int j){
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;j--;

        }
        return true;
    }
    bool validPalindrome(string s) {
        if(s.size() == 0 || s.size() == 1 || s.size() == 2){
            return true;
        }
        int i = 0, j = s.size() - 1;
        while(i <= j){
            if(s[i] == s[j]){
                i++;j--;
            }else{
                return canRemove(s, i + 1, j) || canRemove(s, i, j - 1);
            }
        }
        return true;


    }
};