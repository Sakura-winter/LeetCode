class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> an(26, 0);
        for(char& c:s){
            an[c - 97]++;
        }
        for(int i =0; i < s.size(); i++){
            if(an[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;

    }
};