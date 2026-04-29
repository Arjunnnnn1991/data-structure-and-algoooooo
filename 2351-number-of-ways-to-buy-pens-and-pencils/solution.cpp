class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ans=0;
        for(long long i=0;i<=total/cost1;i++){
            long long rem=(long long)total-(long long)i*cost1; 
            ans+=(long long) rem/cost2+1;
        }
        return ans;
    }
};
