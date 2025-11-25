class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=1,high=arr.size()-2,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){return mid;}
            else if(arr[mid]>arr[mid-1]) low=mid+1;
            else high=mid-1;
        }
        return 0;
    }
};
