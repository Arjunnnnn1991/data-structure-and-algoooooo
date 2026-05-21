class Solution {
public:
        long long checkmedaddy(long long base,long long po,long long lim){
            if(base==0) return 0;
            long long ans=1;
            for(int i=0;i<po;++i){
                if(ans>lim/base) return lim+1;
                ans*=base;
            }
            return ans;
        }
    int countKthRoots(int l, int r, int k) {
        int low=0,high=r;
        while(high>=low){
            int mid=low+(high-low)/2;
            if(checkmedaddy(mid,k,r)<l){
                low=mid+1;
            }
            else high=mid-1;
        }
        int l2=0,r2=r;
        while(r2>=l2){
            int mid=l2+(r2-l2)/2;
            if(checkmedaddy(mid,k,r)>r) r2=mid-1;
            else l2=mid+1;
        }
        if(l2<high) return 0;
        return l2-high-1;
        
    }
};
