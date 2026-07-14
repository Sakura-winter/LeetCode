class Solution {
public:
    int wavifunc(int x){
        string num = to_string(x);
        int cnt = 0;

        if(num.size()< 3){
            return 0;
        }

        for(int i = 1; i < num.size() - 1; i++){
            int left = num[i - 1] - '0';
            int mid = num[i] - '0';
            int right = num[i + 1] - '0';
            if(mid > left && mid > right){
                cnt++;
            }
            else if(mid < left && mid < right){
                cnt++;
            }
        }
        return cnt;
    }
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i = num1; i<=num2; i++){
            ans += wavifunc(i); 
        }
        return ans;
    }
};