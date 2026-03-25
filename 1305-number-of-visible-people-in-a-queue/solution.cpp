class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        vector<int> ans(arr.size(),1);
        int n=arr.size()-1;
        int m=arr.size()-1;
        ans[m]=0;
        stack<int> st;
        st.push(arr[n]);
        n--;
        // while(n>=0){
        //     while(!st.empty()&&arr[st.top()]<arr[n]) st.pop();
        //     if(!st.size()==0){
        //         ans[n]=st.top()-n;
        //     }
        //     st.push(n);
        //     n--;
        // }
        while(n>=0){
            int count=0;
            if(st.size()!=0&&arr[n]>st.top()){
                
                while(st.size()!=0&&arr[n]>st.top()) {st.pop();
                count++;}
            }
            if(!st.empty()) count++;
            ans[n]=count;
            st.push(arr[n]);
            n--;
        }
        return ans;
    }
};
