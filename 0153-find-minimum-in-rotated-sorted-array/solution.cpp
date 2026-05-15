class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size()-1;
        if(arr[0]<=arr[n]) return arr[0];
        int low=0,high=n,mid;
        while(low<high){
            mid=low+(high-low)/2;
        //    if(mid!=0&&mid!=n) if(arr[mid]<arr[mid-1]&&arr[mid]<arr[mid+1]) return arr[mid];
        //     if(arr[low]<arr[mid]){
        //         if(arr[high]<arr[mid]) low=mid+1;
        //         else high=mid-1;
        //     }
        //     else{
        //         if(arr[mid]<arr[high])high=mid-1;
        //         else low=mid+1;
        //     }
        if(arr[mid]>arr[high]) low=mid+1;
        else high=mid;
        }
        return arr[high];
    }
};
