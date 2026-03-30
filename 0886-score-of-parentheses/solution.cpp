class Solution {
public:
    int scoreOfParentheses(string s) {
       stack<int> st;
      st.push(0);
       for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(0);
        }
        else{
            if(st.top()==0){
                st.pop();
                st.top()+=1;
                
            }
            else{
                int x=st.top();
                st.pop();
                st.top()+=2*x;
            }

        }
       }
       while(st.size()>1){
        int x=st.top();
        st.pop();
        st.top()+=x;
       }
       return st.top();
    }
};
