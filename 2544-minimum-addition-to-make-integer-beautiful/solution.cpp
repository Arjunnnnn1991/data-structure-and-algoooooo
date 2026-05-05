class Solution {
public:
long long getsum(long long x){
    long long ans=0;
    while(x>0){
        ans+=x%10;
        x/=10;
    }
    return ans;
}
    long long makeIntegerBeautiful(long long n, int target) {
        long long base=1;
        long long original=n;
        while(getsum(n)>target){
            long long w=(n/base)%10;
            long long add=(10-w)%10;
            n+=add*base;
            base*=10;
        }
        return n-original;
    }
};
