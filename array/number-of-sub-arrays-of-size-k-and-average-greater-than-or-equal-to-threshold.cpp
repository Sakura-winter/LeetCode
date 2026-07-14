class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int cnt = 0;
        for(int i = 0; i < k; i++){
            sum += arr[i];
        }
        if(sum >= k * threshold)cnt++;

        int right = k;
        for(int i = 0; right < arr.size(); i++){
            sum -= arr[i];
            sum += arr[right];
            right++;

            if(sum >= k * threshold){
                cnt++;
            }
        }
        return cnt;
    }
};