class Solution {
public:
    int lFirst(vector<int>& firstAct, vector<int>& firstTime, vector<int>& secondAct, vector<int>& secTime){
        int finish1 = INT_MAX;
        for(int i = 0; i < firstAct.size(); i++){
            finish1 = min(finish1, firstAct[i]+firstTime[i]);
        }

        int finish2 = INT_MAX;
        for(int i = 0; i < secondAct.size(); i++){
            finish2 = min(finish2, max(finish1, secondAct[i])+secTime[i]);
        }
        return finish2;
    }


    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        
        int landFinish = lFirst(landStartTime, landDuration, waterStartTime, waterDuration);
        int waterFinish = lFirst(waterStartTime, waterDuration, landStartTime, landDuration);

        return min(landFinish, waterFinish);
    }
};