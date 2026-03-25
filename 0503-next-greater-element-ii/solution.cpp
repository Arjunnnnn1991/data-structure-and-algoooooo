class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        
        int n=arr.size()-1;
        vector<int> ans(arr.size(),-1);
        
        // for(int i=0;i<n;i++){
        //     if(arr[i]>arr[n]){
        //         ans[n]=arr[i];
        //         break;
        //     }
        // }
        stack<int> st;
        // st.push(arr[n]);
        // n--;
        while(n>=0){
            while(!st.empty()&&st.top()<=arr[n]) st.pop();
            if(st.size()==0) {
                for(int k=0;k<n;k++){
                    if(arr[k]>arr[n]){
                        ans[n]=arr[k];
                        break;
                    }
                }
            }
            else{
                ans[n]=st.top();
            }
            st.push(arr[n]);
            n--;
        }
        return ans;
    }
};
