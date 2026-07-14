class Solution {
public:
    /*double solve(double x, long long n){
        if(n == 0){
            return 1;
        }
        return x * solve(x, n -1);
    }
    double myPow(double x, int n) {
        long long N = n;

        if(N < 0){
            return 1.0 / solve(x, -N);
        }

        return solve(x, N);
    }*/
    //this is causing stack overflow

    //using binary exponentioan
    double myPow(double x, int n) {
        long long N = n;
        if(N<0){
            x = 1/x;
            N = -N;
        }

        double ans = 1;
        while(N > 0){
            if(N & 1) ans *= x;
            x *= x;
            N >>= 1;
        }
        return ans;
    }



};