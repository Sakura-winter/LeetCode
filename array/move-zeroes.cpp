class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //find zero 
        int left = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                left = i;
                break;
            }
        }
        if(left == -1){
            return;
        }// no zero so just return original

        for(int i = left; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[left], nums[i]);
                left++;
            }
        }


    }
};