class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        if(arr.size()==1) return arr[0];
        int low=0, high=arr.size()-1,mid;
        if(arr[0]!=arr[1]) return arr[0];
        if(arr[arr.size()-1]!=arr[arr.size()-2]) return arr[arr.size()-1];
        while(high>=low){
            mid=low+(high-low)/2;
            
            if(arr[mid]!=arr[mid-1]&&arr[mid]!=arr[mid+1]) return arr[mid];
            else{
                if(arr[mid]!=arr[mid+1]){
                    if(mid%2==0) high=mid-1;
                    else low=mid+1;
                }
                else{
                    if(mid%2==0) low=mid+1;
                    else high=mid-1;
                }
            }
        }
        return 0;
    }
};
