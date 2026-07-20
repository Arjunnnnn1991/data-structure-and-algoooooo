class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++){
            int t=0;
            for(auto x:arr[i]){
                t+=x;
            }
            ans=max(t,ans);
        }
        return ans;
    }
};
