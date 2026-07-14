class Solution {
public:
    bool isValid(string s) {
        int n = s.size() -1;
        if(s[n] == '{' || s[n] == '[' || s[n] == '(' )return false;

        stack<char> si;
        for(char c:s){
            if(c == '[' || c ==  '{' || c=='('){
                si.push(c);//found opening brackets;
            }
            else{
                if(si.empty()) return false;
                if(c == '}' && si.top() == '{'){
                    si.pop();
                }else if(c == ']' && si.top() == '['){
                    si.pop();}
                else if(c == ')' && si.top() == '('){
                    si.pop();}
                else{
                    return false;
                }
            }
        }
        return si.empty();

        
    }
};