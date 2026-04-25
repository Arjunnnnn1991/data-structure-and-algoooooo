class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int pivot=0;
        int low=0,high=nums.size()-1,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1]){
                pivot=mid;
                break;
            }
            else if(nums[mid]<nums[mid+1]) low=mid+1;
            else high=mid-1;
        }
        long long rhs=0,lhs=0;
        for(int i=0;i<nums.size();i++){
            if(i==pivot) continue;
            else if(i<pivot)  lhs+=(long long)nums[i];
            else {
                rhs+=(long long)nums[i];
                if(rhs>lhs)return 1;
            }
        }
        if(lhs==rhs) return -1;
        else if(lhs>rhs) return  0;
        else return 1;
    }
};
