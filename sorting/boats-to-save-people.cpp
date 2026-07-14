class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int left = 0;
        int right = people.size() - 1;
        int count = 0;
        sort(people.begin(), people.end());
        while(left <= right){
            if(people[left] == limit){
                count++;
                left++;
            }else if(people[left] + people[right] <= limit){
                count++;
                right--;
                left++;
            }else{
                count++;
                right--;
            }
        }
        return count;
    }
};