class Solution {
public:
    string removeOuterParentheses(string s) {
        /*string ans = "";
        stack<char>ss;
        for(char c: s){
            if(c == '('){
                if(!ss.empty()){
                    ans += c;
                    
                }
                ss.push(c);
            }else{
                char topele;
                if(c == ')'){
                    topele = ss.top();
                    ss.pop();
                    if(ss.empty()){
                        continue;
                    }else{
                        ans +=c;
                    }
                }
            }
        }
        return ans;*/


        //doing using count variable, if '(' count + 1, else -1;
        int cnt = 0;
        string ans = "";
        for(char c: s){
            if(c == '('){
                if(cnt == 0){
                    cnt++;
                }else{
                    cnt++;
                    ans +=c;
                }
                //cnt++;
            }else{

                cnt--;
                if(cnt > 0){
                    ans +=c;
                }

            }
        }
        return ans;
    }
};