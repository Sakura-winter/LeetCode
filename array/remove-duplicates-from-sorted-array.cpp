class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        vector<int> expectedNums(nums.size());
        int left = 0;
        int right = 1;
        while(right < nums.size()){
            if(nums[left] != nums[right]){
                left++;
                nums[left] = nums[right];
            }
            right++;


        }
        return left + 1;
 
    }
};