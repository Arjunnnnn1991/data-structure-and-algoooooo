class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {
        vector<int> ans;
        int n=arr.size()-1;
        ans.push_back(arr[n]);
        stack<int> st;
        st.push(ans[0]);
        n--;
        while(n>=0){
            while(st.size()!=0&&st.top()>arr[n]) st.pop();
            if(st.size()==0) ans.push_back(arr[n]);
            else ans.push_back(arr[n]-st.top());
            st.push(arr[n]);
            n--;
        }
        for(int i=0;i<ans.size()/2;i++){
            swap(ans[i],ans[ans.size()-1-i]);
        }
        return ans;
    }
};
