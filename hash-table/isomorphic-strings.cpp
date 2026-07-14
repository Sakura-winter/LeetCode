class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.size() != t.size()){
            return false;
        }

        if(s.size() == 0){
            return true;
        }
        vector<int> sfreq(256, -1);
        vector<int> tfreq(256, -1);

        for(int i = 0; i < s.size() ; i++){
            if(sfreq[s[i]] != -1 && sfreq[s[i]] != t[i])return false;
            if(tfreq[t[i]] != -1 && tfreq[t[i]] != s[i])return false;
            sfreq[s[i]] = t[i];
            tfreq[t[i]] = s[i];
        }
        return true;
    }
};