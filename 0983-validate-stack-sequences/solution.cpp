class Solution {
public:
    bool validateStackSequences(vector<int>& s, vector<int>& popped) {
        int i=0;
        stack<int> st;
        int j=0;
    st.push(s[i++]);
        while(i<s.size()){
            if(!st.empty()&&st.top()==popped[j]){
                st.pop();
                j++;
            }
            else{
                st.push(s[i++]);
            }
        }
        while(st.size()>0){
            if(st.top()==popped[j]){
                j++;
                st.pop();
            }
            else return false;
        }
        return true;
    }
};
