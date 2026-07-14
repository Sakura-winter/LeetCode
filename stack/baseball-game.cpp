class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans = 0;
        stack<int> s;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "+"){
                int topEle = s.top();
                s.pop();
                int sec = s.top();
                s.push(topEle);
                s.push(topEle + sec);
            }else if(operations[i] == "D"){
                s.push(2* s.top());
            }else if(operations[i] == "C"){
                s.pop();
            }else{
                //string x = operations[i];
                s.push(stoi(operations[i]));
            }
 
        }
        while(!s.empty()){
            ans += s.top();
            s.pop();
        }
        return ans;
        
    }
};