class Solution {
public:
    bool isPerfectSquare(long long num) {
        long long low=0,high=num,mid;
        if(num==1) return true;
        while(high>=low){
            mid=low+(high-low)/2;
            if(mid*mid==num) return true;
            else if(mid*mid>num) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};
