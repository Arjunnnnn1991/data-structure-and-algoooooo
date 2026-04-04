class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int j=0;
        int k=nums.size()-1;
        while(k>=j){
            if(nums[i]==0){
                j++;
                i++;
            }
            else if(nums[j]==1) j++;
            else if(nums[k]==2) k--;
            else if(nums[j]==2){
                swap(nums[k],nums[j]);
                k--;
                
            }
            else if(nums[j]==0){
                swap(nums[i],nums[j]);
                i++;
            }
            else swap(nums[i],nums[k]);
           
        }
        return ;
    }
};
