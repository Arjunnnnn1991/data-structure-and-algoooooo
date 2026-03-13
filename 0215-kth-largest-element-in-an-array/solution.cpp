class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // for(int i=0;i<k;i++){
        //     for(int j=0;j<nums.size()-1;j++){
        //         if(nums[j]>nums[j+1]){
        //             swap(nums[j],nums[j+1]);
        //         }
        //     }
        // }
        // return nums[nums.size()-k];
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
};
