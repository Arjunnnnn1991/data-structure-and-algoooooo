class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int ans=INT_MIN;
        int cur=0;
        for(int i=0;i<arr.size();i++){
            cur=max(cur+arr[i],arr[i]);
            ans=max(cur,ans);
        }
        return ans;
    }
};
