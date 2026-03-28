class Solution {
public:
    string minRemoveToMakeValid(string s) {
        // stack<char> st;
        // stack<char> p;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]==')'){
        //         if(p.size()==0) continue;
        //         else {p.pop();
        //         st.push(')');}
        //     }
        //     else { st.push(s[i]);
        //     if(s[i]=='(') p.push(s[i]);}
        // }
        // int x=p.size();
        // s="";
        // while(st.size()>0){
        //     if(x>0&&st.top()=='(') {
        //         x--;
        //         st.pop();
        //     }
        //     else {
        //         s=st.top()+s;
        //         st.pop();
        //     }
        // }
        // return s;
        stack<char> st;
        int ps=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                ps++;
                st.push('(');
            }
            else if(s[i]==')'){
                if(ps>0){st.push(s[i]);
                ps--;}
                else continue;
                
                
            }
            else st.push(s[i]);
        }
        s="";
        while(st.size()>0){
           s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(), s.end());
        ps=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==')'){
                st.push(s[i]);
                ps++;
            }
            else if(s[i]=='('){
                if(ps>0){
                    st.push(s[i]);
                    ps--;
                }
                else continue;
            }
            else st.push(s[i]);
        }
        s="";
        while(st.size()>0){
            s.push_back(st.top());
            st.pop();
        }
        // reverse(s.begin(), s.end());
        return s;
    }
};
