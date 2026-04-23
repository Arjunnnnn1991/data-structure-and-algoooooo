class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        int curmin=0,mini=INT_MAX,curmax=0,maxi=INT_MIN;
        int total=0;
        for(int i=0;i<arr.size();i++){
            curmax=max(arr[i],arr[i]+curmax);
            curmin=min(arr[i],curmin+arr[i]);
            maxi=max(maxi,curmax);
            mini=min(curmin,mini);
            total+=arr[i];
        }
        return (maxi<0)? maxi:max(total-mini,maxi);
    }
};
