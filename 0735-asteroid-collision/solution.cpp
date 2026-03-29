class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                if(st.size()==0){
                    st.push(arr[i]);
                    continue;
                }
                if(abs(arr[i])==st.top()){
                    st.pop();
                    continue;
                }
                while(!st.empty()&&st.top()<abs(arr[i])&&st.top()>0){
                    st.pop();
                }
                if(st.empty()) st.push(arr[i]);
                else if(st.top()>abs(arr[i])) continue;
                else if(st.top()<0) st.push(arr[i]);
                else st.pop();
            }
            else st.push(arr[i]);
        }
        vector<int> ans;
        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        for(int i=0;i<ans.size()/2;i++) swap(ans[i],ans[ans.size()-1-i]);
        return ans;
    }
};
