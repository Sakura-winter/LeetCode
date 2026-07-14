class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c =='e' || c =='i' || c == 'o' || c == 'u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int maxi = INT_MIN;
        int cnt = 0;
        for(int i=0; i < s.size(); i++){
            if(isVowel(s[i])){
                cnt++;
            }
            if(i >= k){
                if(isVowel(s[i - k])){
                    cnt--;
                }
            }
            maxi = max(maxi, cnt);
        }
        
        return maxi;
        
    }
};