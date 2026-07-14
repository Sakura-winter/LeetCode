class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

        int landFinish, landmax, finish1, waterFinish, waterMax, finish2;
        int ans = INT_MAX;
        for(int i = 0; i < landStartTime.size(); i++){
            for(int j = 0; j < waterStartTime.size(); j++){
                landFinish = landStartTime[i] + landDuration[i];
                landmax = max(waterStartTime[j], landFinish);
                finish1 = landmax + waterDuration[j];


                // water 
                waterFinish = waterStartTime[j] + waterDuration[j];
                waterMax = max(waterFinish, landStartTime[i]);
                finish2 = waterMax + landDuration[i];
                ans = min(ans, finish1);
                ans = min(ans, finish2);


            }
        }
        return ans;
        
    }
};