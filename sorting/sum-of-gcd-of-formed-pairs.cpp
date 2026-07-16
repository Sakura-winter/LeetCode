class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd;
        int mx = INT_MIN;
        for(int x : nums){
            mx = max(x, mx);
            prefixGcd.push_back(gcd(x, mx));
        }
        sort(prefixGcd.begin(), prefixGcd.end());

        long long sum = 0;
        int i = 0;
        int j = nums.size() - 1;
        while(i < j){
            sum += gcd(prefixGcd[i++], prefixGcd[j--]);
        }
        return sum;
    }
};