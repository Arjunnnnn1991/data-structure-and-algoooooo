class Solution {
public:
    bool checker(vector<int>& arr, int key,int mid){
        int val=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%mid!=0){
                val++;
            }
            val+=arr[i]/mid;
        }
        return val<=key;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
        }
        int low=1,high=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;
            bool possy=checker(nums,threshold,mid);
            if(possy){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
