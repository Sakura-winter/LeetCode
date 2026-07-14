class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int m = INT_MIN;
        int mi = INT_MAX;
        for(int &x : nums){
            m = max(m, x);
            mi = min(mi, x);
        }

        return 1L * k * (m - mi);
    }
};