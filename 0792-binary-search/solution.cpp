class Solution {
public:
    int search(vector<int>& nums, int target) {
       int low=0;
       int high=nums.size()-1;
       bool flag =false;
       int midx;
       while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            flag=true;
            midx=mid;
            break;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else {
            low=mid+1;
        }
       } 
       
    
    if (!flag){return -1;} 
    return midx;}
};
