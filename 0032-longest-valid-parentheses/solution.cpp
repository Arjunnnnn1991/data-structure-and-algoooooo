class Solution {
public:
    int longestValidParentheses(string s) {
        // int ans=0;
        // int cur=0;
        // stack<char> st;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='('){
        //         st.push('(');
        //     }
        //     else{
        //         if(st.size()!=0){
        //             st.pop();
        //             cur+=2;
        //             if(st.size())
        //         }
        //         else{
        //             ans=max(ans,cur);
        //             cur=0;

        //         }
        //     }
        // }
        // ans=max(cur,ans);
        // return ans;
        stack<int> st;
        st.push(-1);
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(i);
            else{
                st.pop();
                if(st.size()==0){
                    st.push(i);
                }
                else{
                    ans=max(ans,i-st.top());
                }
            }
        }
        return ans;
    }
};
