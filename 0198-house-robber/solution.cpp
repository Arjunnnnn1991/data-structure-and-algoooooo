class Solution {
public:
    int help(int i,vector<int>&dp,vector<int>&arr){
        if(i>=arr.size()) return 0;
        if(i==arr.size()-1) return arr[i];
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(help(i+1,dp,arr),arr[i]+help(i+2,dp,arr));
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        else if(nums.size()==2) return max(nums[0],nums[1]);
        vector<int>dp(nums.size(),-1);
        return help(0,dp,nums);
    }
};
