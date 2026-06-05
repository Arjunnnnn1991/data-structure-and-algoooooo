class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int ans=0;
        while(i<j){
            if(nums[i]!=0)i++;
            else if(nums[j]==0)j--;
            else{
                swap(nums[i],nums[j]);
                j--;
                ans++;
            }
        }
        return ans;
    }
};
