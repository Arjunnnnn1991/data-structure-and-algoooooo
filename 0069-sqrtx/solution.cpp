class Solution {
public:
    long mySqrt(long x) {
        if(x==0) return 0;
        long ans=1;
        // vector<int> helper;
        // for(int i=1;i<=x;i++){
        //     helper.push_back(i);
        // }
        long low=1,high=x,mid;
        while(high>=low){
            mid=low+(high-low)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid>x) high=mid-1;
            else{
                ans=mid;
                low=mid+1;
            }
        }
        
        return ans;
    }
};
