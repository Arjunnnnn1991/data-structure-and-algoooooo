class Solution {
public:
    string removeDuplicates(string s) {
        
        
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.size()!=0&&st.top()==s[i]) {
            st.pop();
            }
            else st.push(s[i]);
        }
        s="";
        while(st.size()>0){
            s=st.top()+s;
            st.pop();
        }
        
        return s;
    }
};
