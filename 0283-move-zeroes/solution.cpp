class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        
        while(i<j){
            if(nums[i]!=0){
                i++;
            }
            else{
                for(int w=i;w<j;w++){
                    nums[w]=nums[w+1];

                }
                
                nums[j]=0;
                j--;
            }
        }
        
    }
};
