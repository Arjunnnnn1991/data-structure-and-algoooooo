class Solution {
public:
    int solver(vector<int>&arr,vector<int>&dp,int i,int n){
        if(i==n) return dp[i]=arr[i];
        else if(i>n) return 0;
        else if(dp[i]!=-1) return dp[i];
        else return dp[i]=max(solver(arr,dp,i+1,n),arr[i]+solver(arr,dp,i+2,n));
        return 0;
    }
    int rob(vector<int>& arr) {
          int n = arr.size();
    if (n == 1) return arr[0];
        vector<int>a(arr.size(),-1);
        vector<int>b(arr.size(),-1);
        return max(solver(arr,a,0,arr.size()-2),solver(arr,b,1,arr.size()-1));
        return 0;
    }
};
