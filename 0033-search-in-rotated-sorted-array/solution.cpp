class Solution {
public:
    int search(vector<int>& arr, int target) {
        int high=arr.size()-1;
        int low=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target) return mid;
            else if(arr[low]<=arr[mid]){
                if(target>=arr[low]&&target<arr[mid]) high=mid-1;
                else low=mid+1;
            }
            else{
                if(target<=arr[high]&&target>=arr[mid])low=mid+1;
                else high=mid-1;
            }
        }
        return -1;
    }
};
