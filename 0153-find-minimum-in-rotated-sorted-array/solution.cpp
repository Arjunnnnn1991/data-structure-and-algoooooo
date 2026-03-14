class Solution {
public:
    int findMin(vector<int>& arr) {
        // int low=0,high=arr.size()-1,mid;
        // if(arr.size()==1) return arr[0];
        // if(arr[0]<=arr[arr.size()-1]) return arr[0];
        // if(arr[arr.size()-1]<=arr[arr.size()-2]) return arr[arr.size()-1];
        // else{
            
        //     while(high>=low){
        //         mid=low+(high-low)/2;
                
        //         if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]) return arr[mid+1];
        //         else{
        //             if(arr[0]>arr[arr.size()-1]){
        //                 if(arr[low]>arr[mid]) low=mid+1;
        //                 else high=mid-1;
        //             }
        //             else {
        //                 if(arr[low]>arr[mid]) low=mid+1;
        //                 else high=mid-1;
        //             }
        //         }
        //     }
        // }
        // return high;
        int low = 0, high = arr.size() - 1;

    // If the array isn't rotated at all
    if (arr[low] <= arr[high]) return arr[low];

    while (low < high) {
        int mid = low + (high - low) / 2;

        // If mid is greater than the high element, 
        // the minimum must be in the right half.
        if (arr[mid] > arr[high]) {
            low = mid + 1;
        } 
        // Otherwise, the minimum is at mid or to the left.
        else {
            high = mid;
        }
    }
    
    // When low == high, we've found the minimum
    return arr[low];
    }
};
