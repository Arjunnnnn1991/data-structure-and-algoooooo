class Solution {
public:
    int earliestFinishTime(vector<int>& a, vector<int>& at,
                           vector<int>& b, vector<int>& bt) {
        int ans = INT_MAX;
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < b.size(); j++) {
              
                int landFirst = max(a[i] + at[i], b[j]) + bt[j];
                
                int waterFirst = max(b[j] + bt[j], a[i]) + at[i];
                ans = min(ans, min(landFirst, waterFirst));
            }
        }
        return ans;
    }
};
//  int ans=INT_MAX;
//         for(int i=0;i<a.size();i++){
//             int low=0,high=b.size()-1;
//             int temp=INT_MAX;
//             while(low<=high){
//                 int mid=low+(high-low)/2;
//                 if(b[mid]<a[i]+at[i]){
//                     temp=min(temp,a[i]+at[i]+bt[mid]);
//                     ans=min(ans,temp);
//                     low=mid+1;
//                 }
//                 else {
//                    temp=min(temp,b[mid]+bt[mid]);     
//                    high=mid-1;
                    
//                 }
//             }
//             ans=min(ans,temp);
//         }
//         return ans;
