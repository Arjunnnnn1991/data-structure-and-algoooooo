class Solution {
public:
   
    int rec(vector<int>&dp,vector<int>&coins,int amount,int have){
        if(amount==0) return 1+dp[0];
        else if(amount<0) return INT_MAX;
        else if(dp[amount]!=-1) return dp[amount];
        else{
        int opt=INT_MAX-1;
        for(auto x:coins){
            opt=min(opt,rec(dp,coins,amount-x,have));
        }
        return dp[amount]=1+opt;
       }
    }

    int coinChange(vector<int>& coins, int amount) {
        if(amount==0) return 0;
        sort(coins.begin(),coins.end());   
        vector<int>dp(amount+100,-1);
        rec(dp,coins,amount,0);
        if(dp[amount]!=INT_MAX) return  dp[amount];
        else return -1;
       
    }
};
