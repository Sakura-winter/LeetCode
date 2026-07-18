class Solution {
public:
    int gcdd(int a, int b){
        int dividend = a;
        int divisor = b;
        while(divisor > 0){
            int c = dividend%divisor;
            dividend = divisor;
            divisor = c;

        }
        return dividend;
    }
    int findGCD(vector<int>& nums) {
        //int ans = 0;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int& i:nums){
            maxi = max(maxi, i);
            mini = min(mini, i);
        }
        return gcdd(maxi, mini);
    }
};