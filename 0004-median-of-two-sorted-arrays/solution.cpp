class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        if(n>m) return findMedianSortedArrays(b,a);
        int low=0,high=n;
        int mid1,mid2;
        int k=(n+m+1)/2;
        while(high>=low){
            mid1=low+(high-low)/2;
            mid2=k-mid1;
            int mla=(mid1==0)? INT_MIN:a[mid1-1];
            int mra=(mid1==n)?INT_MAX:a[mid1];
            int mlb=(mid2==0)? INT_MIN:b[mid2-1];
            int mrb=(mid2==m)?INT_MAX:b[mid2];
            if(mla<=mrb&&mlb<=mra){
                if((n+m)%2==0){
                    return (max(mla,mlb)+min(mrb,mra))/2.00;
                }
                else return max(mla,mlb);
            }
            else if(mla>mrb){
                high=mid1-1;
            }
            else low=mid1+1;
        }
        return 0;
    }
};
