class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            char t=s[i];
            if(t=='(') st.push(t);
            else if(t=='{') st.push('{');
            else if(t=='[') st.push('[');
            else if(t==')'){
                if(st.size()==0||st.top()!='(') return false;
                else st.pop();
            }
            else if(t=='}'){
                if(st.size()==0||st.top()!='{') return false;
                else st.pop();
            }
            else if(t==']'){
                if(st.size()==0||st.top()!='[') return false;
                else st.pop();
            }
        }
        if(st.size()!=0) return false;
        else return true;
    }
};
