class Solution {
public:

int move(int n,vector<int>& fromnow){
    if(n==0||n==1){
        
        return 1;
    }
    else if(n<0){
        return 0;
    }
    if(fromnow[n]!=-1) return fromnow[n];
    else{
        fromnow[n]=move(n-1,fromnow)+move(n-2,fromnow);
    }
    return fromnow[n];

    
}
    int climbStairs(int n) {
        vector<int> fromnow(n+1,-1);
        return move(n,fromnow);
    }
};
