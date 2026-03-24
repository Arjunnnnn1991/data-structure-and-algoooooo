class Solution {
public:
    int hIndex(vector<int>& arr) {
        int ans=0;
        int size=arr.size();
        int low=0,high=arr.size()-1,mid;
        // while(low<=high){
        //     mid=low+(high-low)/2;
        //     int l=min(arr[mid],size-mid);
        //     if(arr[mid]>=size-mid){
        //         ans=l;
        //         high=mid-1;
        //     }
        //     else low=mid+1;
        // }
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]>=size-mid){
                ans=min(arr[mid],size-mid);
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
