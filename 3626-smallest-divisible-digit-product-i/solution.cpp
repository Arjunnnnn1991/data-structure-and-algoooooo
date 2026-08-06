class Solution {
public:
    int pro(int n){
        int ans=1;
        while(n){
            ans*=n%10;
            n/=10;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;i<=n+10;i++){
            if(pro(i)%t==0) return i;
        }
        return 0;
    }
};
