class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        for(long long start =1000,comma=1;start<=n;start*=1000,comma++){
            long long end=start*1000-1;
            long long count;
            if(n> end) count=end-start+1;
            else count=n-start+1;
            if(count>0) ans+=count*comma;
            
        }
        return ans;
    }
};
