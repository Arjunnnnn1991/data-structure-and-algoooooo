class Solution {
public:
    int solver(vector<int>&dp,int n){
        if(n==0) return 1;
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
        else return dp[n]=solver(dp,n-2)+solver(dp,n-1);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        // return solver(dp,n);
     dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
    }
};
