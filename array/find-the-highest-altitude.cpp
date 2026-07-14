class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt = 0;
        int sum = 0;
        for(int& i:gain){
            sum += i;
            maxAlt = max(maxAlt, sum);
            
        }
        return maxAlt;
    }
};