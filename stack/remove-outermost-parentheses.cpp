class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
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
        return ans;
    }
};