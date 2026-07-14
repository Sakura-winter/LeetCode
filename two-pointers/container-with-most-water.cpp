class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;

        int area = 0;
        int maxAreaa = 0;

        while(i < j){
            area = min(height[i], height[j]) * (j - i);
            maxAreaa = max(maxAreaa, area);
            if(height[i] < height[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxAreaa;


    }
};