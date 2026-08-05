class Solution {
public:
    long long rec(vector<vector<int>>&dp,int n,int k,int target){
       long long m=1000000000+7;
        if(target==0&&n==0)return 1;
        else if(target<=0||n<=0) return 0;
        else if(dp[n][target]!=-1) return dp[n][target];
        else{
             long long have=0;
            for(int i=1;i<=k;i++){
             have = (have + rec(dp,n-1,k,target-i)) % m;
            }
            return dp[n][target]=have;
        }
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(n+5,vector<int>(target+5,-1));
        return rec(dp,n,k,target);
    }
};
