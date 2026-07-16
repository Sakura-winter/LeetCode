class Solution {
public:
    string removeDuplicates(string s) {
        /*stack<char> st;
        for(char c : s){
            if(st.empty()){
                st.push(c);
            }else{
                if(st.top() == c){
                    st.pop();
                }else{
                    st.push(c);
                }
            }
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;*/
//--------------------------------------------------------------
        //not using stack, only using string
        /*string ans = "";
        for(int c : s){
            if(!ans.empty() && ans.back() == c){
                ans.pop_back();
            }else{
                ans.push_back(c);
            }
        }
        return ans;*/
//--------------------------------------------------------------------
        //using original string as answer
        int i = 0;
        for(char c : s){
            s[i] = c;
            if(i > 0 && s[i] == s[i - 1]){
                i-=2;
            }
            i++;
        }
        return s.substr(0, i);
        //T.C = O(n) and S.C = O(1);

    }
};