class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size()-1;
        int low=0,high=n,mid;
        while(low<high){
            mid=low+(high-low)/2;
            if(arr[mid]==arr[low]&&arr[mid]==arr[high])low++,high--;
            else if(arr[mid]>arr[high])low=mid+1;
            else high=mid;
        }
        return arr[high];
    }
};
