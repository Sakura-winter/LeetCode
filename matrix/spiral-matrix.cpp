class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int left = 0, right = n - 1;
        int top = 0, bottom = m - 1;
        int count = 0;
        vector<int> ans;
        if(m == 0) return ans;
        if(n == 0) return ans;

        while (left <= right && top <= bottom) {
            // left to right
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
                count++;
                
            }
            top++;
            if (count == m * n) return ans;

            // top to bottom
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
                count++;
                if (count == m * n)
                    break;
            }
            right--;

            // right to left
            if (count == m * n) return ans;
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
                count++;
                if (count == m * n)
                    break;
            }
            bottom--;

            // bottom to top
            if (count == m * n) return ans;
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
                count++;
                if (count == m * n)
                    break;
            }
            left++;
        }
        return ans;
    }
};