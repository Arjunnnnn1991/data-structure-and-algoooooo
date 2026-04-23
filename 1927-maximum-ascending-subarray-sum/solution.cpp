class Solution {
public:
    int maxAscendingSum(vector<int>& arr) {
        int maxi=INT_MIN,cur=0;
        int pre=-1;
        for(int i=0;i<arr.size();i++){
           if(arr[i]==pre){
           cur=pre;
           }
           else if(arr[i]<pre){
            cur=arr[i];
           }
           else{
            cur+=arr[i];
            
           }
           pre=arr[i];
           maxi=max(maxi,cur);
        }
        return maxi;
    }
};
