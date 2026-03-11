class Solution {
public:
int upper(vector<int>& arr, int target){
    int ans=-1;
    int high=arr.size()-1,low=0,mid;
    while(high>=low){
        mid=low+(high-low)/2;
        if(arr[mid]==target){
            ans=mid;
            low=mid+1;

        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else high=mid-1;
    }
        return ans;
    }
    int lower(vector<int>& nums, int target){
    int ans=-1;
    int high=nums.size()-1,low=0,mid;
    while(high>=low){
        mid=low+(high-low)/2;
        if(nums[mid]==target){
            ans=mid;
            high=mid-1;

        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else high=mid-1;
        
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        ans[0]=lower(nums,target);
        ans[1]=upper(nums,target);
        return ans;
    }
};
