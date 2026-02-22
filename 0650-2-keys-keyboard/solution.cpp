class Solution {
public:
    int hcfcheckerr(int n){
        int hcf=1;
        for(int i=1;i<n;i++){
            if(n%i==0) hcf=i;
        }
        return hcf;
    }
    bool isprime(int n){
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int minSteps(int n) {
        int hcf=INT_MIN;
        int ans=0;
        if(isprime(n)) return n;
        if(n==1) return 0;
        while(isprime(n)==false){
            int j=hcfcheckerr(n);
            ans+=n/j;
        n/=(n/j);
        }
        ans+=n;
        
        return ans;

    }
};
