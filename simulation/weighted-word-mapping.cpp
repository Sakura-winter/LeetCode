class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res;
        
        
        //find sum and append to the res
        for(string &word: words){
            int sum = 0;
            for(char ch: word){
                sum += weights[ch - 'a']; //a = 97 in ascii , so if ch = d, it will give us 100 - 97
            }
            
            int modu = sum %26;

            res += 'z' - modu;

        }
        return res;

    }
};