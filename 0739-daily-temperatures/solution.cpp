class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int> st;
        vector<int> arr(t.size(),0);
        int n=t.size()-2;
        st.push(n+1);
        while(n>=0){
            while(st.size()>0&&t[st.top()]<=t[n])st.pop();
            if(st.size()==0) ;
            else arr[n]=st.top()-n;
            st.push(n);
            n--;
        }
        return arr;
    }
};
