class Solution {
public:
    int found(vector<int>& nums, int left, int right, int tar){
        if(left > right){
            return -1;
        }
        int mid = (left+right)/2;
        if(nums[mid] == tar){
            return mid;
        }else if(nums[mid] > tar){
            return found(nums, left, mid-1, tar);
        }else{
            return found(nums, mid+1, right, tar);
        }
        
    }
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        return found(nums, left, right, target);
    }
};