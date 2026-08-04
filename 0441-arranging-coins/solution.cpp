class Solution {
public:
    int arrangeCoins(int n) {
        if(n==0) return 0;
        else if(n==1) return 1;
        else{
            int low=1,high=n,mid;
            while(low<=high){
                mid=low+(high-low)/2;
                long long h=  (long long)((long long)mid*(mid+1))/2;
                if(h==(long long)n){
                    return mid;
                }
                else if(h>(long long)n)high=mid-1;
                else low=mid+1;
            }
            return high;
        }
        return 0;
    }
};
