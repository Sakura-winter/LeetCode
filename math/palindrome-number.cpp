class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return 0;
        }
        long long rev = 0;
        int temp = x;
        int rem = 0;
        
        while(x > 0){
            rem = x%10;
            x = x/10;
            rev = rev *10 + rem;
            
        }
        if (rev == temp){
            return true;
        }
        else{
            return false;
        }
    }
};