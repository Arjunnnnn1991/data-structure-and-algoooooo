#include <stack>
class Solution {
public:
    int findPoisonedDuration(vector<int>& arr, int d) {
       
        // stack<int> st;
        // for(int i=0;i<arr.size();i++){
        //     if(st.size()==0){
        //         for(int j=arr[i];j<arr[i]+d;j++){
        //             st.push(j);
        //         }
        //     }
        //     else{
        //         if(i<arr.size()-1){
        //             if(st.top()>arr[i]+d) {
        //                 while(i<arr.size()&&st.top()>arr[i]+d) i++;
        //             }
        //         }
        //         for(int j=arr[i];j<arr[i]+d;j++){
        //             if(j>st.top()) st.push(j);
        //         }
        //     }
        // }
        // return st.size();
       
        int ans=0;
        int j=-1;
        for(int i=0;i<arr.size();i++){
            // if(arr[i]+d<=j) continue;
             if(arr[i]>j){
                j=arr[i]+d-1;
                ans+=d;
            }
            else{
                
                ans+=d+arr[i]-j-1;
                j=arr[i]+d-1;
            }
        }
        return ans;
    }
};
