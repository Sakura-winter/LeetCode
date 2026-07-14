class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> sa;
        string ss = "";
        string tt = "";
        for(char c:s){
            if(c == '#'){
                if(!sa.empty()){
                    sa.pop();
                }
            }else{
                sa.push(c);
            }
        }

        while(!sa.empty()){
            ss += sa.top();
            sa.pop();
        }

        //string tt = "";
        for(char c:t){
            if(c == '#'){
                if(!sa.empty()){
                    sa.pop();
                }
            }else{
                sa.push(c);
            }
        }
        while(!sa.empty()){
            tt += sa.top();
            sa.pop();
        }

        return ss == tt;

    }
};