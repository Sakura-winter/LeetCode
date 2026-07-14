class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> cnt(26, 0);
        for(char c : text){
            cnt[c - 'a']++;
        }

        int ans = min({cnt['b' - 'a'],
                        cnt['a' - 'a'],
                        cnt['l' - 'a']/2,
                        cnt['o' - 'a']/2,
                        cnt['n' - 'a']});
        
        return ans;

    }
};