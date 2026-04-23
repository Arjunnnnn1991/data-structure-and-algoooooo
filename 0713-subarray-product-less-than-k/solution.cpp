class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
        if(k==0) return 0;
        int curpo=1;
        int ans=0;
        int i=0,j=0;
        while(j<arr.size()){
           curpo*=arr[j];
           while(curpo>=k&&i<=j){
            curpo/=arr[i++];
           }
           ans+=j-i+1;
           j++;
        }
        return ans;
    }
};
